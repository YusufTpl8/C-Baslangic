#include <stdio.h>

int toplam(int f[], int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return f[0];
    }
    return f[0];
}

int main() {
    int n;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);

    int f[n];
    printf("%d elemani giriniz:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &f[i]);
    }

    printf("Dizinin elemanlarinin toplami: %d\n", sonuc);

    return 0;
}
