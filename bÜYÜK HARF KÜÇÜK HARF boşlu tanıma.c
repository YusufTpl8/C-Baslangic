/* büyük harf küçük harf ayýrma*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k=0,k1,k2=0;
    char s[100];
     printf("Bir seyler yazin : ");
    gets(s);
   while( s[k]!='\0' )
 k++;
printf("BUYUK harfler harfler:");
printf("\n");
for (k1=0;k1<k;k1++)
{
    if((s[k1]<91)&&(s[k1]>64))
    {
        printf("%c",s[k1]);
    }
}
   printf("\n");
    printf("Kucuk harfler:");
printf("\n");
            for (k1=0;k1<k;k1++){
                if((s[k1]<123)&&(s[k1]>96))
            {
        printf("%c",s[k1]);
            }
            }
              printf("\n");
    printf("boþluk karakteri:");
printf("\n");
            for (k1=0;k1<k;k1++){
                if((s[k1]==32))
            {
k2++;
            }

            }
            printf("%d",k2);
    return 0;
}

