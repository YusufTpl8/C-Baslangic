/*2 kenar,1 a��dan ��gen alan�*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float a,b,c,d;
    printf("��genin 1.keanr�n� giriniz ");
   scanf("%f",&a);
    printf("��genin 2.keanr�n� giriniz ");
      scanf("%f",&b);
    printf("��gende verilen a��y� giriniz");
       scanf("%f",&c);
       d=a*b*sin(M_PI*c/180)/2;
   printf("%f",d);
    return 0;
}
