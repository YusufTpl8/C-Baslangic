#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c, d, alan;

    printf("��genin 1. kenar�n� giriniz: ");
    scanf("%f", &a);

    printf("��genin 2. kenar�n� giriniz: ");
    scanf("%f", &b);

    printf("��gende verilen a��y� giriniz: ");
    scanf("%f", &c);

    if (c == 90) {
        d = sqrt(a * a + b * b);
        alan = a * b / 2;
        printf("Hipoten�s: %2f\n", d);
        printf("Alan: %2f\n", alan);
    } else {
        d = sqrt(a * a + b * b - 2 * a * b * cos(M_PI * c / 180));
        alan = a * b * sin(M_PI * c / 180) / 2;
        printf("3. kenar: %2f\n", d);
        printf("Alan: %2f\n", alan);
    }

    return 0;
}
