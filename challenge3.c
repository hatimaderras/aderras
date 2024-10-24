#include <stdio.h>
int main()
{
float dictance_meter, dictance_km, mile;

printf("put dictance in meter:");

scanf("%f",&dictance_meter);

dictance_km= dictance_meter/1000;

mile= dictance_km*1.609;

printf("the dictance in mile is:%f",mile);

}
