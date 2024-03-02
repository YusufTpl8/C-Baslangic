#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Kac not giriceginizi giriniz");
    scanf("%d",&n);
    int i,a[n],toplam,ort,sayac1=0,sayac2=0,min=100,max=0;
    i=n;
    for(n=0;n<i;n++)
    {
       printf("ogrencinin notunu giriniz");
       scanf("%d",&a[n]) ;
       toplam+=a[n];
       if(a[n]<=min)
        {
            min=a[n];
        }
        if(a[n]>=max)
            max=a[n];
    }
printf("min= %d",min);
printf("max= %d",max);

for(n=0;n<i;n++)
    {
        if(min==a[n])
           {
               sayac1++;
           }
        if(max==a[n])
           {
               sayac2++;
           }
    }
    ort=(toplam-(sayac1*min)-(sayac2*max))/(n-sayac1-sayac2);
printf("cevap= %d",ort);


    return 0;
}
