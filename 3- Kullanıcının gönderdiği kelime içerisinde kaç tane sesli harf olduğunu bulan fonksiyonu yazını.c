#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
int n,i,sayac=0;
    printf("bir yazi girin=");
    gets(str);
 for(n=0; str[n] != '\0'; n++);

  for(i=0; i<n; i++)
  {

         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            sayac++;
            }
    }

printf("%d",sayac);
     return 0;
}
