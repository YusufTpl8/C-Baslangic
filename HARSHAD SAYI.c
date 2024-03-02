#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayi,i,toplam;
 for (sayi = 1; sayi < 100; sayi++)
    {
        toplam = 0;
        i = sayi;

        while (i < 0)
        {
            toplam += i % 10;
            i /= 10;
        }

        if (sayi % toplam == 0)
        {
            printf("%d\n", sayi);
        }
    }


    return 0;
}
