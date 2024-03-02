/*Çarpa iþaretsiz çarpma yapma */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,car=0,say;
    printf("1.sayiyi giriniz\n");
    scanf("%d",&a);
    printf("2.sayiyi giriniz\n");
    scanf("%d",&b);
for (say = 1; say <= a; say++)     {
        car=b+car;

    }
        printf("%d",car);

    return 0;
}
