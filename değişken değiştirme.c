/*De�i�ken de�i�tirme*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,b;
     printf("a Say�s�n� giriniz ");
    scanf("%d", &a);
    printf("b Say�s�n� giriniz ");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=-1*(b-a);
     printf("a: %d", a);
     printf(" b: %d", b);
  return 0;
}
