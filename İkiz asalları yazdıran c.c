/* ikiz asal sayilar */
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,say,m,i,say2,k=0;
    printf("Bitis degeri giriniz \n");
    scanf("%d",&m);
   for (n = 1; n <= m; n++)
   {
       say=0;
        for (i = 1; i <= n; i++)
        {
        if (n%i==0)
        {
            say++;
        }
        }
        if (say==2)
        {
            k=n+2;
        for (say2=0,i= 1; i <= k; i++)
        {

            if (k% i == 0)
        {
            say2=say2+1;
        }
        }
               if(say2 <= 2)
{
        printf(" %d",n);
        printf(";%d",k);
        }
           }
 }
    return 0;
}
