#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(0==0)
    {
        int n, k,s,licz=1;
        scanf("%d",&n);


        if(n==0){break;}

        s=0;
        k=1;

        while(k<n)
        {
            licz++;
            k=k+licz;
        }
        if(k==n)
        {
            printf("%d %d\n",licz+1,licz+1);
        }else
        {
           printf("%d %d\n",k-n,licz);
        }

    }

    return 0;
}
