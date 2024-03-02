#include <stdio.h>
#include <stdlib.h>

int main()
{


int n,i,j=0;

printf ("sattir sayisi giriniz\n");

scanf ("%d",&n);

for (i=0;i<n;i++){

j++;

for (j=i;j>0;j--)
{

    printf ("%3d",j);


}
    printf ("\n");

}

    return 0;
}
