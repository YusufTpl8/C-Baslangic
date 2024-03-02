#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, say, top = 0, say2, top2 = 1, top3 = 0, sonuc;

    printf("Sayi giriniz:\n");
    scanf("%d", &x);

    for (say = 1; say <= x; say++)
    {
        for (say2 = 1; say2 <= say; say2++)
        {
            top2 = top2 * say2;
        }

        top = (x^say) / top2;
        top3 = top3 + top2;
    }

    sonuc = top3;
    printf("%d", sonuc);

    return 0;
}
