/*. x de�eri klavyeden girildi�inde 1 + 2 + .... + (x - 1) + x seri toplama de�erini hesaplayan
fonksiyon yaz�n�z.*/
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
