#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n,ter=0,m,bas;
    printf("Sayi giriniz\n");
    scanf("%d",&n);
    m=n;
    while(m!=0){
        bas=m%10;
        ter=bas+ter*10;
        m=(m-bas)/10;
    }
    if (n==ter)
    {
        printf("Bu bir palindrom sayidir");
    }
    else
        printf("Bu bir palindrom sayi degildir");

    return 0;
}
