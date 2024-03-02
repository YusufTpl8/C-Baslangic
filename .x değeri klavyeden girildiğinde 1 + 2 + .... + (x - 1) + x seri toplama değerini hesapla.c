/*. x deðeri klavyeden girildiðinde 1 + 2 + .... + (x - 1) + x seri toplama deðerini hesaplayan
fonksiyon yazýnýz.*/
#include <stdio.h>
#include <stdlib.h>
int f(int x)
{
   int i,toplam=0;
    for(i=1;i<=x;i++)
{
    toplam+=i;
}
    return toplam;

}

int main()
{
int x;
printf("Bir sayi giriniz");
scanf("%d",&x);
printf("%d",f(x));
     return 0;
}
