/* 2 say�n�n matamatiksel i�lemleri*/
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, top, far, car, bol;
   printf("1.Say�y� giriniz");
    scanf("%f", &a);
    printf("2.Say�y� giriniz");
    scanf("%f", &b);
    top = (a + b);
    car = (a * b);
    bol = (a / b);
    far = (a - b);

    printf("top: %f\n", top);
    printf("far: %f\n", far);
    printf("car: %f\n", car);
    printf("bol: %f\n", bol);

    return 0;
}
