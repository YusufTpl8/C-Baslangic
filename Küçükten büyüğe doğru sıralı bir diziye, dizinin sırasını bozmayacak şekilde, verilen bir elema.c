#include <stdio.h>
#include <stdlib.h>
void f(int s[],int n)
{
 int i,j,gecici;
  for (i=0;i<n+1;i++)
{
    for(j=0;j<n+1;j++)
    {
        if(s[i]<s[j])
        {
            gecici=s[j];
            s[j]=s[i];
            s[i]=gecici;
        }
    }
    }
}
int main()
{
   int s[100],n,i,m;
   printf("kaç elamanli bir dizi olmali");
   scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("Sayi giriniz=");
            scanf("%d", &s[i]);
    }
     printf("Diziye ekleyeceginiz degeri giriniz");
    scanf("%d",&s[n]);
    m=s[n];
            f(s,n);
for (i = 0; i < n + 1; i++)
    {
        printf("%d ", s[i]);
    }
    return 0;
}
