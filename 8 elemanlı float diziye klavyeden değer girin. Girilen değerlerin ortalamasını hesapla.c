/*8 elemanl� float diziye klavyeden de�er girin. Girilen de�erlerin ortalamas�n� hesaplay�p
ekrana yazd�r�n. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
float top=0,f[8],ort;
for(int i=0;i<8;i++){
    printf("Deger gir!\n");
    scanf("%f",&f[i]);
    top+=f[i];
}
    ort=top/8;
    printf("ortalama=%f",ort);
    return 0;
}
