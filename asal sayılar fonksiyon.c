#include <stdio.h>
#include <stdlib.h>

void f(int x)
{
    int i,say=0;
    for(i=1;i<=x;i++)
    {
        if ((x%i)==0)
        {
            say++;
        }
    }
        if (say==2)
    {
            printf("asal sayýdýr");

    }
        else
            printf("asal sayý deðildir");

}
int main() {
    int x;

    printf("Bir sayý giriniz: ");
    scanf("%d", &x);

    f(x);

    return 0;
}
