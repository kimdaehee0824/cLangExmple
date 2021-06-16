//이 프로그램은 학생들의 건강상태를 자가진단하는 프로그램입니다.
//학번 : 1301, 이름 : 김대희, 수행평가 시작 시간 : 2021.06.03.17:03,
#include <stdio.h>
#include <windows.h>
#pragma warning(disable : 4996) ​
typedef struct a
{
    char name[30];
    int schoolNumber;
    int AgreeToSurvey[3];
} SelfCheck;

SelfCheck student[20];
int num = 0;
int c = 2;
void WhatGonnaDo();
void set_font()
{
    c++;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void gotoxy(int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void SetConsole()
{
    int cnt = -1;
    int b = 14;
    char *str = "Loading";
    printf("%s", str);
    while (b > 0)
    {
        set_font();
        gotoxy(cnt, 0);
        printf("%c", str[cnt++]);
        Sleep(100);
        if (cnt == 7)
            cnt = 0;
        if (c == 15)
            c = 3;
        b--;
    }
}
void swap(int *x, int *y)
{
    int tmp = 0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void UIDesignLine()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    printf("\n------------------------------------------------------------\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void UIDesignEqual()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    printf("\n========================================\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void teacherMode()
{
    int whatMenu;
    UIDesignEqual();
    printf("선생님 안녕하십니까?\n"
           "모든 학생의 설문 결과를 학번 순으로 보고 싶으시면 1번을,"
           " 동의한에 채크되어있는 학생을 보고 싶으시면 2번을 입력해 주세요.\n"
           "(종료하시려면 0번을 눌러주세요.)");
    UIDesignEqual();
    scanf("%d", &whatMenu);
    system("cls");
    if (whatMenu == 0)
        printf("종료.");
    if (whatMenu == 2)
    {
        for (int i = 0; i < 20; i++)
        {
            if (student[i].AgreeToSurvey[0] == 1 || student[i].AgreeToSurvey[1] == 1 || student[i].AgreeToSurvey[2] == 1)
            {
                if (student[i].name[0] == '\0')
                    break;
                UIDesignLine();
                printf("이름 : %s 학변 : %d\n", student[i].name, student[i].schoolNumber);
                for (int j = 0; j < 3; j++)
                {
                    if (student[i].AgreeToSurvey[j] == 1)
                        printf("동의함 ");
                    else if (student[i].AgreeToSurvey[j] == 0)
                        printf("동의안함 ");
                }
                UIDesignLine();
            }
        }
        int finalMenu = 0;
        printf("모두 확인하였습니다.종료하시려면 0번을, 처음 화면으로 넘어가고 싶으시다면 1번을 눌러주세요.\n\t입력 : ");
        scanf("%d", &finalMenu);
        if (finalMenu == 0)
            ;
        if (finalMenu == 1)
        {
            system("cls");
            WhatGonnaDo();
        }
        else
            printf("종료.");
    }
    else if (whatMenu != 2)
    {
        for (int i = 0; i < 20; i++)
        {
            if (student[i].name[0] == '\0')
                break;
            UIDesignLine();
            if (whatMenu == 1)
            {
                for (int a = 0; a < num; a++) // 요소의 개수만큼 반복
                {
                    for (int j = 0; j < num - 1; j++) // 요소의 개수 - 1만큼 반복
                    {
                        if (student[j].schoolNumber > student[j + 1].schoolNumber)
                        {
                            swap(&student[j].schoolNumber, &student[j + 1].schoolNumber);
                            for (int b = 0; b < 20; b++)
                            {
                                int tmp = 0;
                                tmp = student[j].name[b];
                                student[j].name[b] = student[j + 1].name[b];
                                student[j + 1].name[b] = tmp;
                            }
                            for (int b = 0; b < 3; b++)
                                swap(&student[j].AgreeToSurvey[b], &student[j + 1].AgreeToSurvey[b]);
                        }
                    }
                }
            }
            printf("이름 : %s 학변 : %d\n", student[i].name, student[i].schoolNumber);
            for (int j = 0; j < 3; j++)
            {
                if (student[i].AgreeToSurvey[j] == 1)
                    printf("동의함 ");
                else if (student[i].AgreeToSurvey[j] == 0)
                    printf("동의안함 ");
            }
            UIDesignLine();
        }
        int finalMenu = 0;
        printf("모두 확인하였습니다.종료하시려면 0번을, 처음 화면으로 넘어가고 싶으시다면 1번을 눌러주세요.\n\t입력 : ");
        scanf("%d", &finalMenu);
        if (finalMenu == 0)
            ;
        if (finalMenu == 1)
        {
            system("cls");
            WhatGonnaDo();
        }
    }
}
void studentMode()
{
    int count;
    int ifTrue = 0;
    char buf[10];
    system("cls");
    UIDesignLine();
    printf("입력할 학생의 수를 입력하세요.\n"
           "학생은 반 기준이니 20명 이내만 입력 가능합니다");
    UIDesignLine();
    printf("\t입력 : ");
    if (scanf("%d", &count) != 1)
    {
        printf("잘못 입력하셨습니다.\n다시 입력 :");
        gets(buf);
        fflush(stdin);
        scanf("%d", &count);
    }
    num = count;
    system("cls");
    printf("<주의사항>");
    UIDesignEqual();
    printf("학번은 4글자로 입력하세요.\n"
           "이름은 30자 이내로 작성해 주세요/\n"
           "설문지 내용을 동의한다면 1을, 동의하지 않는다면 0를 입력해 주세요");
    UIDesignEqual();
    for (int i = 0; i < count; i++)
    {
        printf("%d번째", i + 1);
        UIDesignLine();
        printf("%d번째 학생의 학번을 입력하세요.\n입력 :", i + 1);
        if (scanf("%d", &student[i].schoolNumber) != 1)
        {
            printf("잘못 입력하셨습니다.\n다시 입력 :");
            gets(buf);
            fflush(stdin);
            scanf("%d", &count);
        }
        printf("%d번째 학생의 이름을 입력하세요.\n입력 :", i + 1);
        scanf("%s", student[i].name);
        int numBool[3] = {0};
        UIDesignEqual();
        UIDesignLine();
        printf("1. 학생 본인이 코로나19가 의심되는 아래의 임상증상*이 있나요?\n"
               "* (주요 임상증상) 체온 37.5℃ 이상, 기침, 호흡곤란, 오한, 근육통, 두통, 인후통,후각·미각 소실 또는 폐렴.\n"
               "* (단, 코로나19와 관계없이 평소의 기저질환으로 인한 증상인 경우는 제외)");
        UIDesignLine();
        printf("\t입력 : ");
        scanf("%d", &numBool[0]);
        if (numBool[0] == 1)
            student[i].AgreeToSurvey[0] = 1;
        else if (numBool[0] == 0)
            student[i].AgreeToSurvey[0] = 0;
        else
            printf("\n잘못 입력하셨습니다.내가 잘 입력하라고 했죠? 동의안함으로 체크할겁니다.\n");
        UIDesignLine();
        printf("2. 학생 본인 또는 동거인이 코로나19 의심증상으로 진단검사를 받고 그 결과를 기다리고 있나요?\n\t입력 : ");
        UIDesignLine();
        printf("\t입력 : ");
        scanf("%d", &numBool[1]);
        if (numBool[1] == 1)
            student[i].AgreeToSurvey[1] = 1;
        else if (numBool[1] == 0)
            student[i].AgreeToSurvey[1] = 0;
        else
            printf("\n잘못 입력하셨습니다.내가 잘 입력하라고 했죠? 동의안함으로 체크할겁니다.\n");
        UIDesignLine();
        printf("3. 학생 본인 또는 동거인이 방역당국에 의해 현재 자가격리가 이루어지고 있나요?\n"
               "※ <방역당국 지침> 최근 14일 이내 해외 입국자, 확진자와 접촉자 등은 자가격리 조치\n"
               "단, 직업특성상 잦은 해외 입·출국으로 의심증상이 없는 경우 자가격리 면제");
        UIDesignLine();
        printf("\t입력 : ");
        scanf("%d", &numBool[2]);
        if (numBool[2] == 1)
            student[i].AgreeToSurvey[2] = 1;
        else if (numBool[2] == 0)
            student[i].AgreeToSurvey[2] = 0;
        else
            printf("\n잘못 입력하셨습니다.내가 잘 입력하라고 했죠? 동의안함으로 체크할겁니다.\n");

        UIDesignEqual();
        system("cls");
    }
    printf("설문조사를 모두 입력했습니다.\n (결과를 보시려면 1번을 입력, 처음 화면으로 넘어가고 싶다면 2번을 입력), 종료는 아무 키나 누르세요.\n\t입력 : ");
    scanf("%d", &ifTrue);
    if (ifTrue == 1)
        teacherMode();
    else if (ifTrue == 2)
        WhatGonnaDo();
    else
        printf("종료");
}
void WhatGonnaDo()
{
    SetConsole();
    system("cls");

    int what;
    char buf[10];
    UIDesignLine();
    printf("안녕하십니까?\n이 프로그램은 자가진단을 효율적으로 보기 위해 만든 프로그램입니다.\n"
           "학생 모드는 1번을 교직원 모드는 2번을 입력해 주세요. (취소는 0번)");
    UIDesignLine();
    printf("입력 :");
    if (scanf("%d", &what) != 1)
    {
        gets(buf);
        printf("잘못 입력하셨습니다.\n다시 입력 :");
        fflush(stdin);
        scanf("%d", &what);
    }
    if (what == 1)
    {
        system("cls");
        studentMode();
    }

    else if (what == 2)
    {
        system("cls");
        teacherMode();
    }
    else if (what == 0)
        printf("종료.");
}
int main()
{
    WhatGonnaDo();
    return 0;
}