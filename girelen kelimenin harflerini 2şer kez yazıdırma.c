#include <stdio.h>
#include <stdlib.h>

int main()
{
 int k=0,k1,k2=0,m;
    char s[100],n[200];
     printf("Bir seyler yazin : ");
    gets(s);
   while( s[k]!='\0' )
 k++;

for (k1=0;k1<k;k1++)
    {
        for(m=0;m<2;m++)
        {
     n[k2] = s[k1];
     k2++;
    }
    }
puts(n);

 return 0;
}
