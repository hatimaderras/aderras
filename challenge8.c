#include <stdio.h>
int main ()
{
    float a,b,c,d, somme, moyenne;

    printf("entre value for a:");
    scanf("%f",&a);
    printf("entre value for b:");
    scanf("%f",&b);
    printf("entre value for c:");
    scanf("%f",&c);
    printf("entre value for d:");
    scanf("%f",&d);

    somme=a+b+c+d;
    moyenne=somme/4;

    printf("la somme :%.2f\n", somme);
    printf("le moyenne:%.2f\n", moyenne);



}
