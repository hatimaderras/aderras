#include <stdio.h>
int main ()
{
    float Fahrenheit, Celsius;
    printf("write the temperature in Fahrenheit:");
    scanf("%f",&Fahrenheit);
    Celsius =(Fahrenheit-32)/1.8;
    printf("the temperature in Fahrenheit in Celsiusis is:%.2f",Celsius);
    return 0;

}
