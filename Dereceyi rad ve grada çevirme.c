/*Derc grad ve radyan dönüþtürme*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
int main()
{
  float x,der,rad,grad;
  printf("giriceðiniz deðer derece cinsi ise 1 , radyan cinseinden ise 2 ,grad cinsinden ise 3 giriniz ");
  scanf("%f",&x);
  if(x==1){
    printf("Derece cinsinden veri giriniz");
    scanf("%f",&der);
    rad=der*PI/180;
    grad=der*200/180;
    printf("Radyan: %2f\n", rad);
    printf("Grad: %2f\n", grad);

  }
  else if (x==2){
     printf("Radyan cinsinden veri giriniz");
    scanf("%f",&rad);
    der=rad*180/PI;
    grad=rad*200/PI;
      printf("grad ,%2f\n",grad);
      printf("derece,%2f\n",der);
  }
   else if (x==3){
     printf("Grad cinsinden veri giriniz");
    scanf("%f",&grad);
    der=180*grad/200;
    rad=grad*PI/200;

     printf("derece,%2f\n",der);
      printf("radyan ,%2f\n",rad);

   }
   else
   printf("BÖYLE BÝR ÝÞLEM BULUNMAMAKTADIR !!");
    return 0;
}
