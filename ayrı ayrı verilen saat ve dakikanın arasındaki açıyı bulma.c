#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int saat,dak,ileri;
    printf("Saati giriniz\n");
    scanf("%d",&saat);
    printf("Dakikayi giriniz\n");
    scanf("%d",&dak);
    if((saat<=24)&&(saat>=0)&&(dak>=0)&&(dak<=60))
  {
      if (saat>=12)
      {
          saat=saat-12;
          ileri=dak/2;
   saat=saat*30+ileri;
   dak=dak*6;
   printf("saat acisi: %d\n",saat);

   printf("Dakika acisi: %d",dak);
      }
  else if (saat<12){
     ileri=dak/2;
   saat=saat*30+ileri;
   dak=dak*6;
   printf("saat acisi: %d\n",saat);
   printf("Dakika acisi: %d",dak);
  }
  else
    printf("yanlis saat");
    return 0;
}
}
