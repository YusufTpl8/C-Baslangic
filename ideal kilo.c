#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
char x;
float k,b,bki,ik;
 printf("Cinsiyetinizi giriniz  ");
 scanf("%c",&x);
 printf("Kilonuzuz giriniz  ");
 scanf("%f",&k);
 printf("Boyunuz giriniz  " );
 scanf("%f",&b);
   if (x == 'e' || x == 'E') {
       ik = 50 + 2.3 * abs((b/100) - 60);
        printf("ideal kilonuz= %f\n",ik);
        bki = k / ((b/100) *(b/100));
        printf("Bki de�eri= %f\n",bki);
                if (bki <= 17.5) {
            printf("A��r� zay�fs�n�z\n");
        } else if (17.5 < bki && bki <= 20.7) {
            printf("Zay�fs�n�z\n");
        } else if (20.7 < bki && bki <= 26.4) {
            printf("Normal kilolusunuz\n");
        } else if (26.4 < bki && bki <= 27.8) {
            printf("Normal kilodan biraz fazlas�n�z\n");
        }
        else if (27.8 < bki && bki <= 31.1) {
            printf("Fazla kilolu\n");
        }
        else if (31.1 < bki && bki <= 34.9) {
            printf("�ok fazla kilolu\n");
        }
        else if (35 < bki && bki <= 40) {
            printf("Sa�l�k a��s�ndan kilonuz riskli\n");
        }
        else if (40< bki && bki <= 50 ){
            printf("Hastal�kl� bir �ekilde a��r� kilolusunuz\n");
        }
        else if (50< bki && bki <= 60) {
            printf("S�per a��r� kilolusunuz");
        }

    }
      else if (x == 'K' || x == 'k') {
             ik=45.5+2.3*(b-60);
        printf("ideal kilonuz: %f\n", ik);
        bki = k / ((b/100) *(b/100));
        printf("Bki de�eri: %f\n", bki);
         if(bki <= 17.5) {
            printf("A��r� zay�fs�n�z\n");
        }
        else if (17.5 < bki && bki <= 19.1) {
            printf("Zay�fs�n�z\n");
        }
         else if (19.1 < bki && bki <= 25.8) {
            printf("Normal kilolusunuz\n");
        }
         else if (25.8 < bki && bki <= 27.3) {
            printf("Normal kilodan biraz fazlas�n�z\n");
        }
        else if (27.3 < bki && bki <= 32.3) {
            printf("�ok fazla kilolu\n");
        }
        else if (32.3 < bki && bki <= 34.9) {
            printf("Sa�l�k a��s�ndan kilonuz zararl�\n");
        }
        else if (35 < bki && bki <= 40) {
            printf("Sa�l�k a��s�ndan kilonuz riskli\n");

        }
        else if (40< bki && bki <= 50) {
            printf("Hastal�kl� bir �ekilde a��r� kilolusunuz\n");
        }
        else if (50< bki && bki <= 60) {
            printf("S�per a��r� kilolusunuz");
        }

    }



    return 0;
}
