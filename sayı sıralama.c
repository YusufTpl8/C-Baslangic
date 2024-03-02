#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Kaç elemanli bir dizi olsun");
    scanf("%d",&n);

    int s[100],i,j,gecici;

  for (i=0;i<n;i++)
  {
       printf("Sayi giriniz=");
        scanf("%d",&s[i]);
  }
//sýralama

  for (i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(s[i]<s[j])
        {
            gecici=s[j];
            s[j]=s[i];
            s[i]=gecici;

        }
    }
    }
     for (i=0;i<n;i++)
  {

        printf("%5d",s[i]);
  }

    return 0;
}
