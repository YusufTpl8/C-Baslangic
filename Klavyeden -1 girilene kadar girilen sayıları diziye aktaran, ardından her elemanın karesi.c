#include <stdio.h>
#include <stdlib.h>
int main()
{
    float A[10],i,top,ort;
    top=0;
    for(i=0;i<10;i++)
    {

        printf("Bir deger giriniz\n");
       scanf("%f",&A[i]);
        top+=A[i];
    }
    ort=top/8;
    printf("%f",ort);
    return 0;
}
