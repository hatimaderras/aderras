#include <stdio.h>
int main ()
{
    int a,b;

    printf("enter the valuefor a:");
    scanf("%d",&a);

    printf("enter the value for b:");
    scanf("%d",&b);

    printf("result");
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);

    if (b!=0)
        {
            printf("a/b=%d\n",a/b);
            printf("a%%b=%d\n",a%b);
        } else
        {
            printf("mymknch");
        }
}
