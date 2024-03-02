/*2 kenar,1 açýdan üçgen alaný*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float a,b,c,d;
    printf("üçgenin 1.keanrýný giriniz ");
   scanf("%f",&a);
    printf("üçgenin 2.keanrýný giriniz ");
      scanf("%f",&b);
    printf("üçgende verilen açýyý giriniz");
       scanf("%f",&c);
       d=a*b*sin(M_PI*c/180)/2;
   printf("%f",d);
    return 0;
}
