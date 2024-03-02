/*10 elemanlý tamsayý dizisine klavyeden deðerler girilerek bir fonksiyona gönderilecek. Dizide yer
alan en büyük ilk iki sayýyý bularak ekrana yazdýran fonksiyonu yazýnýz.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10];
    int n,max,max2,min,min2;
     printf("sayi giriniz");
        scanf("%d",&a[0]);
        max=a[0];
        max2=a[0];
    for(n=1;n<10;n++)
    {
        printf("sayi giriniz");
        scanf("%d",&a[n]);
        if (a[n]>max)
        {
            max=a[n];
        }
    }
    for(n=0;n<10;n++)
    {
    if(max>a[n])
    {
     if (a[n]>max2)
        {
            max2=a[n];
        }
    }
    }
    printf("en buyuk=%d\n",max);
        printf("en buyuk 2.=%d\n",max2);
/* min */
 for(n=0;n<10;n++)
    {
    if (a[n]<min)
        {
            min=a[n];
        }
    }
    for(n=0;n<10;n++)
    {
    if(min<a[n])
    {
     if (a[n]<min2)
        {
            min2=a[n];
        }
    }
    }
    printf("en kucuk= %d\n",min);
        printf("en kucuk 2.=%d\n",min2);

    return 0;
}
S
