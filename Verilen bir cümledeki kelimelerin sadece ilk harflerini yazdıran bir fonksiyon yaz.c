#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void f(char h[100]) {
    int n;
   while (h[n] != '\0') {
        n++;
    }
         h[0] -= 32;
for (int i=0;i<=n;i++){
    if (h[i]==' '){
                h[i+1]-=32;
    }
    }
    for(int i=0;i<=n;i++){
    printf("%c",h[i]);
    }
    }
int main() {
    char h[100];
    printf("Bir cumle giriniz=");
    gets(h);
      f(h);



    return 0;
}
