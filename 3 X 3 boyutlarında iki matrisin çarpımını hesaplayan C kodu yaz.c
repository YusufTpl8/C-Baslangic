#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[2][1][3],b[3][2][1],i,j,k,carp,k1,i1,j1;

    for(i=0;i<2;i++)
    {
        for(k=0;k<1;k++)
        {
            for(j=0;j<3;j++)
            {
                printf("1.Matriks icin bir deger giriniz");
                scanf("%d",&a[i][j][k]);
            }
        }
    }

     for(i1=0;i1<3;i1++)
    {
        for(k1=0;k1<2;k1++)
        {
            for(j1=0;j1<1;j1++)
            {
                printf("2.Matriks icin bir deger giriniz");
                scanf("%d",&b[i1][j1][k1]);
            }
        }
    }
/*Çarpma kýsmý*/

 for(i=0;i<2;i++)
    {
        for(k=0;k<1;k++)
        {
            for(j=0;j<3;j++)
            {
for(i1=0;i1<3;i1++)
    {
        for(k1=0;k1<2;k1++)
        {
            for(j1=0;j1<1;j1++)
            {

                carp=a[i][j][k]*b[i1][j1][k1];
                printf("%d\n",carp);
            }
        }
    }
            }
        }
    }












    return 0;
}
