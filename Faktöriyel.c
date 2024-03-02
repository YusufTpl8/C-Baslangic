/*Çarpa iþaretsiz çarpma yapma */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,car=1,say;
    printf("1.sayiyi giriniz\n");
    scanf("%d",&n);

for (say = 1; say <= n; say++)
{
        car=car*say;

    }
        printf("faktoyriyeli %d",car);

    return 0;
}
