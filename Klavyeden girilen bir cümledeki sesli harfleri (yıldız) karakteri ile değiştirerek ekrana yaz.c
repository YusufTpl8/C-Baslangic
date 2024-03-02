#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f(char s[100])
{
int n=0,i;
while (s[n]!='\0')
{
    n++;
}
   for(i=0;i<n;i++)
   {
 if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o' ||
s[i] == 'A' || s[i] == 'E' || s[i] == 'U' || s[i] == 'O')
          {
              s[i]='*';
       }
   }
      for(i=0;i<n;i++)
      {
          printf("%c",s[i]);
      }


}

int main()
{
    char s[100];
    printf("kelime girini:");
    gets(s);
    f(s);

    return 0;
}
