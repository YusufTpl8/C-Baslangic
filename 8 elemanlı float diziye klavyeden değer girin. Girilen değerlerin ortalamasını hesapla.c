/*8 elemanlý float diziye klavyeden deðer girin. Girilen deðerlerin ortalamasýný hesaplayýp
ekrana yazdýrýn. */
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
