//이 프로그램은 학생들의 건강상태를 자가진단하는 프로그램입니다.
//학번 : 1301, 이름 : 김대희, 수행평가 시작 시간 : 2021.06.03.17:03
#include <stdio.h>
#include <stdbool.h>==

typedef struct SelfCheck
{

    char name[30];
    int schoolNumber;
    bool AgreeToSurvey1;
    bool AgreeToSurvey2;
    bool AgreeToSurvey3;

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
void SelfCheckText(int num)
{
    int numBool[3];
    printf("1. 학생 본인이 코로나19가 의심되는 아래의 임상증상*이 있나요?\n"
           "* (주요 임상증상) 체온 37.5℃ 이상, 기침, 호흡곤란, 오한, 근육통, 두통, 인후통,후각·미각 소실 또는 폐렴.\n"
           "* (단, 코로나19와 관계없이 평소의 기저질환으로 인한 증상인 경우는 제외)\n입력");
    scanf("%d", &numBool[1]);
}
void studentMode()
{
    int what, count;

    printf("입력할 학생의 수를 입력하세요. 입력 :");
    scanf("%d", &count);
    printf("<주의사항>");
    UIDesignEqual();
    printf("학번은 4글자로 입력하세요.\n"
           "이름은 30자 이내로 작성해 주세요/\n"
           "설문지 내용을 동의한다면 1을 동의하지 않는다면 2를 입력해 주세요");
    UIDesignEqual();
    for (int i = 0; i < count; i++)
    {
        printf("%d번째\n", i + 1);
        UIDesignLine();
        printf("%d번째 학생의 학변을 입력하세요.\n", i + 1);
        printf("입력 :");
        scanf("%d", &student[i].schoolNumber);
        printf("%d번째 학생의 이름을 입력하세요.\n", i + 1);
        printf("입력 :");
        scanf("%s", student[i].name);
        SelfCheckText(i);
    }
}
void teacherMode()
{
    int what;
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
