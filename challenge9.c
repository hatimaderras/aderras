#include <stdio.h> #include <math.h> // drtha bach nqdr ndir sqrt and pow
int main ()
{
    float x1,x2,y1,y2,distance;

    printf("enter value x1:");
    scanf("%f",&x1);
    printf("enter value y1:");
    scanf("%f",&x1);
    printf("enter value x2:");
    scanf("%f",&x1);
    printf("enter value y2:");
    scanf("%f",&x1);

    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("the distance is:%.2f", distance);
        }
