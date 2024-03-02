/*Deðiþken deðiþtirme*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,b;
     printf("a Sayýsýný giriniz ");
    scanf("%d", &a);
    printf("b Sayýsýný giriniz ");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=-1*(b-a);
     printf("a: %d", a);
     printf(" b: %d", b);
  return 0;
}
