#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[5], bas = 0, n, i;
    printf("Maximum 5 basamakli sayi giriniz!\n");
    scanf("%d",&n);
    if (n<100000) {
        for (i=0; i<5;i++) {
            bas=n%10;
            m[i] =bas;
            n =(n- bas) / 10;
        }
        for (i =0;i< 5;i++) {
            printf("%d\n", m[i]);
        }
    } else {
        printf("Hata!\n");
    }

    return 0;
}
    }





    return 0;
}
