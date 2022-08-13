#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE (25)


int main()
{
    int x[]={1,1,1,1,1,5,3,7,7,7,7,0,0,4,4,7,2,3,1,3,4,4,3,};
    int j=0,i=0,c=1,cmax=0,r=0,mr=0;
    for (i=0;i<=MAX_SIZE;i++)
    {
        if (x[i]==x[i+1])
        {
            c++;
            r=x[i];
        }
        else
        {
            if (c>cmax)
            {
                mr=x[i];
                cmax=c;
            }
             c=1;
        }
    }
    printf("%d\n%d",cmax,mr);
    return 0;
}

