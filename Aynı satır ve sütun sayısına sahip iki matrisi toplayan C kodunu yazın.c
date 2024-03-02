#include <stdio.h>
#include <stdlib.h>
int main()
{
int k,i,m,z;
scanf("%d",&i);
scanf("%d",&k);
m=i;
z=k;
 int a[i][k],toplam=0;
for (i=0;i<m;i++)
{
    for(k=0;k<z;k++)
    {
        printf("Bir matriks degerin giriniz=");
        scanf("%d",&a[i][k]);
}
}
for (i=0;i<m;i++)
{
    for(k=0;k<z;k++)
    {
       toplam+=a[i][k];
}
}
printf("%d",toplam);
    return 0;
}
