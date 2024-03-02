#include <stdio.h>
#include <stdlib.h>
int main()
{

 int a[10],b[10],i,n=1,toplam1=0,toplam2=0,ort=0,ort2=0;

for (i=0;i<10;i++)
{
            printf("%d",n);
          printf(". Ogrencinin kilo giriniz= ");
        scanf("%4d",&a[i]);
        toplam1=toplam1+a[i];
         printf("%d",n);
          printf(". Ogrencinin Boy giriniz= ");
        scanf("%4d",&b[i]);
        toplam2=toplam2+b[i];
        n++;
}
    ort=toplam1/10;
    ort2=toplam2/10;
    printf("%d\n",ort);
    printf("%d",ort2);
    return 0;
}
