#include <stdio.h>
int main()
{
    int n,m=1,i,fak=1,say;
    printf("Bir sayi giriniz\n");
    scanf("%d", &n1);
      for (say=1; say <= 999; say++) {
        for (i = 1; i <= say; i++) {
            fak *= i;
           }
           if (fak==n){
           m=m*say;
            say=100000;//bitirecek
            printf("Sayi bir sayinin faktoriyelidir %3d",m);
              break;
           }
           fak=1;
    }
 if (fak!=n){
   printf("Sayi bir sayinin faktoriyeli degildir");
}
 return 0;

}
