#include <stdio.h>
int main ()
{
    float Fahrenheit, Celsius;
    printf("enter Fahrenheit:");
    scanf("%f",&Fahrenheit);
    Celsius= (Fahrenheit-32)/1.8;
    printf("the Celsius is :%.2f",Celsius);
    if (Celsius<0)
    {
        printf("tres froid");
    } else if (Celsius>=0 && Celsius<15)
    {
        printf("froid");
    } else if (Celsius>15 && Celsius<30)
    {
        printf("chaud");
    } else if (Celsius>30)
    {
        printf("tres chaud");
    }
}
