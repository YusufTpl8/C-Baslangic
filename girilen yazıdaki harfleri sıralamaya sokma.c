#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n;
char s[100],gecici;

       printf("yazi giriniz=");
        gets(s);
         for(n=0; s[n] != '\0'; n++);

//sýralama
  for (i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(s[i]>s[j])
        {
            gecici=s[j];
            s[j]=s[i];
            s[i]=gecici;
        }
    }
    }
        puts(s);

    return 0;
}
