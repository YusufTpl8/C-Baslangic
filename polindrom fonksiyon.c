#include <stdio.h>
#include <stdlib.h>
int pol(int x)
{
   int m,ters,n;
    n=x;
    while (x!=0)
    {
        m=x%10;
        ters=m+ters*10;
        x=(x-m)/10;
    }
    if(ters==m)
    {
        printf("Tebrikler polindrom sayi yazabiliyorsun mal");
    }
    else
        printf("Ne gerizekalý insansýn ya");
}



int main()
{
    int x;
    printf("polindrom sayi gir !!!\n");
    scanf("%d",&x);
    pol(x);
    return 0;
}
