#include <stdio.h>
#include <stdlib.h>
void f(char h[100])
{
    int n=0,i,say=0;
   while (h[n]!='\0')
   {
       n++;
   }
    h[n]=' ';
    for (i=0;i<=n;i++)
    {
        if(h[i]==' ')
        {
            if(h[i-1]=='a')
            {
                say++;
            }
        }
    }
    printf("cevap=");
    printf("%d",say);
}
int main()
{
char h[100];
printf("bir kelime giriniz=");
gets(h);
f(h);

return 0;
}
