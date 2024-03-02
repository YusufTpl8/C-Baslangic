#include <stdio.h>
#include <stdlib.h>

int main()
{
  int pn,n,i;
  n=9;
  for(i=0;i<n;i++)
  {
    pn=i*((3*i)-1)/2;
    printf("%d\n",pn);
  }
    return 0;
}
