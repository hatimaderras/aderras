#include <stdio.h>
int main ()
{
    float distance_mile, metre, km_distance;
    printf("enter the distance in Mile");
    scanf("%f",&distance_mile);
    km_distance = distance_mile/1.609;
    metre= km_distance*1000;
    printf("the distance in metre:%.2f",metre);
}
