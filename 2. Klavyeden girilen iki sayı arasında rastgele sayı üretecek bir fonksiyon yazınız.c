/*2. Klavyeden girilen iki say� aras�nda rastgele say� �retecek bir fonksiyon yaz�n�z.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int f(int x, int y)
{
           srand(time(NULL));
  int cvp;
 if (x < y) {
        cvp = rand() % (y - x + 1) + x;
    } else if (x > y) {
        cvp = rand() % (x - y + 1) + y;
    } else {
        cvp = x;
    }
}


int main()
{
    int x,y;
    printf("bir say� giriniz");
    scanf("%d",&x);
     printf("bir say� giriniz");
    scanf("%d",&y);
    printf("Rastgele Say�: %d\n", f(x,y));

    return 0;
}
