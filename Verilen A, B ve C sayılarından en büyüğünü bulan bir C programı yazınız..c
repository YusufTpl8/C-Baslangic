#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("A sayýsý giriniz");
    scanf("%2d",&a);
     printf("B sayýsý giriniz");
       scanf("%2d",&b);
      printf("C sayýsý giriniz");
        scanf("%2d",&c);
    if(a!=b&&a!=c&&b!=c)
     {
     if(a>b)
    {
  if(a>c)
   {
  printf("En büyük sayý A'dir");
   }
   else
      printf("En büyük sayý C'dir");

      }
    else
    if(b>c)
    {
         printf("En büyük sayý B'dir");
    }
      else
      printf("En büyük sayý C'dir");
     }
     else
        printf ("Bazı sayılar eşit")
    return 0;
}
