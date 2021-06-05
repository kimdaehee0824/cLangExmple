//이 프로그램은 학생들의 건강상태를 자가진단하는 프로그램입니다.
//학번 : 1301, 이름 : 김대희, 수행평가 시작 시간 : 2021.06.03.17:03
#include <stdio.h>
#include <stdbool.h>

typedef struct SelfCheck
{
    char name[30];
    int schoolNumber;
    bool AgreeToSurvey[3];

} SelfCheck;

SelfCheck student[20];
void UIDesignLine()
{
    printf("\n------------------------------\n");
}
void UIDesignEqual()
{
    printf("\n====================\n");
}
void teacherMode()
{
    for (int i = 0; i < 20; i++)
    {
        printf("%s %d \n", student[i].name, student[i].schoolNumber);
        for (int j = 0; j < 3; j++)
        {
            if (student[i].AgreeToSurvey[i] == true)
                printf("동의함 ");
            else
                printf("동의안함 ");
        }
        if (student[i].name[0] == '\0')
            break;
        }
}
void studentMode()
{
    int count;
    int ifTrue = 0;
    printf("입력할 학생의 수를 입력하세요.\n"
           "학생은 반 기준이니 20명 이내만 입력 가능합니다\n\t입력 : ");
    scanf("%d", &count);
    printf("<주의사항>");
    UIDesignEqual();
    printf("학번은 4글자로 입력하세요.\n"
           "이름은 30자 이내로 작성해 주세요/\n"
           "설문지 내용을 동의한다면 1을 동의하지 않는다면 2를 입력해 주세요");
    UIDesignEqual();
    for (int i = 0; i < count; i++)
    {
        printf("%d번째", i + 1);
        UIDesignLine();
        printf("%d번째 학생의 학변을 입력하세요.\n", i + 1);
        printf("입력 :");
        scanf("%d", &student[i].schoolNumber);
        printf("%d번째 학생의 이름을 입력하세요.\n", i + 1);
        printf("입력 :");
        scanf("%s", student[i].name);
        int numBool[3];
        UIDesignEqual();
        printf("1. 학생 본인이 코로나19가 의심되는 아래의 임상증상*이 있나요?\n"
               "* (주요 임상증상) 체온 37.5℃ 이상, 기침, 호흡곤란, 오한, 근육통, 두통, 인후통,후각·미각 소실 또는 폐렴.\n"
               "* (단, 코로나19와 관계없이 평소의 기저질환으로 인한 증상인 경우는 제외)\n\t입력 : ");
        scanf("%d", &numBool[1]);
        printf("2. 학생 본인 또는 동거인이 코로나19 의심증상으로 진단검사를 받고 그 결과를 기다리고 있나요?\n\t입력 : ");
        scanf("%d", &numBool[2]);
        printf("3. 학생 본인 또는 동거인이 방역당국에 의해 현재 자가격리가 이루어지고 있나요?\n"
               "※ <방역당국 지침> 최근 14일 이내 해외 입국자, 확진자와 접촉자 등은 자가격리 조치\n"
               "단, 직업특성상 잦은 해외 입·출국으로 의심증상이 없는 경우 자가격리 면제\n\t입력 : ");
        scanf("%d", &numBool[3]);
        UIDesignEqual();
        for (int j = 0; j < 3; j++)
        {
            if (numBool[j] == 1)
                student[i].AgreeToSurvey[j] = true;
            else if (numBool[j] == 0)
                student[i].AgreeToSurvey[j] = false;
        }
    }
    printf("설문조사를 모두 입력했습니다. 결과를 보시겠습니까? 예는 1번을 입력)\n\t입력 : ");
    scanf("%d", &ifTrue);
    if (ifTrue == 1)
        teacherMode();
}

void WhatGonnaDo()
{
    int what;
    printf("안녕하십니까?\n이 프로그램은 자가진단을 효율적으로 보기 위해 만든 프로그램입니다.\n"
           "학생 모드는 1번을 교직원 모드는 2번을 입력해 주세요. (취소는 0번)\n");
    UIDesignLine();
    printf("입력 :");
    scanf("%d", &what);

    if (what == 1)
        studentMode();
    else if (what == 2)
        teacherMode();
    else if (what == 0)
        printf("종료.");
    else
        printf("잘못 입력하였습니다. 다시 입력해주세요.");
}

int main()
{
    WhatGonnaDo();
    return 0;
}
