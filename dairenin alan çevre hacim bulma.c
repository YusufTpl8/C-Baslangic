#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
int main()
{
float r,alan,cevre,hacim;
printf ("Yarýçapý giriniz");
scanf("%f",&r);
alan=PI*r*r;
cevre=2*PI*r;
hacim=4/3*PI*r*r*r;
printf("Alan= %f\n",alan);
printf("cevre= %f\n",cevre);
printf("hacim= %f\n",hacim);

    return 0;
}
