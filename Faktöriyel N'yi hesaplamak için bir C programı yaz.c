#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
    int fak=1;
    for(int i=1;i<=n;i++)
        {
            fak*=i;
        }
        printf("Faktoriyeli %d",fak);
    return fak;
}
int main()
{
    int n;
    printf("faktoriyelini hesaplamak istenen sayýyý giriniz!\n");
    scanf("%d",&n);
    f(n);
    return 0;
}
