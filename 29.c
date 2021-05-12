//섭씨(Celsius)온도를 입력하면 화씨(Fahrenheit)온도를 반환하는 함수
#include <stdio.h>
double ToFahrenheit(double cel, double fah);
double ToCelsius(double cel, double fah);
int main()
{
    double cel, fah;
    int order;
    printf("1.섭씨를 화씨로, 2.화씨를 섭씨로 :\n");
    printf("선택 >>");
    scanf("%d", &order);
    

    if (order == 1)
    {
        printf("섭씨 입력");
        scanf("%lf", &cel);
        printf("변환된 화씨 %lf", ToFahrenheit(cel, fah));
    }
    else if (order == 2)
    {
        printf("화씨 입력");
        scanf("%lf", &fah);
        printf("변환된 섭씨 %lf", ToCelsius(cel, fah));
    }
    else if (order != 1 && order != 2)
    {
        printf("입력 오류");
    }
    return 0;
}
double ToFahrenheit(double cel, double fah)
{
    fah = 1.8 * cel + 32;
    return fah;
}
double ToCelsius(double cel, double fah)
{
    cel = (fah -32) / 1.8;
    return cel;
}