#include <stdio.h>
int main ()
{
    float Fahrenheit, Celsius;
    printf("enter Fahrenheit:");
    scanf("%f",&Fahrenheit);
    Celsius= (Fahrenheit-32)/1.8;
    printf("the Celsius is :%.2f",Celsius);

}
