#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,n,i,j,k,x,c,is;

    while(1)
    {

    cin>>a;

    if(a<0){break;}

     is=0;

    for(i=10;i>=2;i--)
    {
            n=a;
            c=0;
        for(j=1;j<=i;j++)
        {
            if(n%i==1){
                n=n-(n/i)-1;
                c++;

            }
        }
        if((c==i) && (n%i==0))
        {
                k=i;
                is=1;
                break;
        }
    }
    if(is==1)
    {
        cout<<a<<" coconuts, "<<k<<" people and 1 monkey\n";
    }
    else
    {
        cout<<a<<" coconuts, no solution\n";
    }

}
return 0;
}
