#include <iostream>

using namespace std;

int main()
{

    long long int n,k,m,sum;

    cin>>n;

    while(n>0)
    {
        cin>>k;

        sum=0;

        for(int i=1;i<=k;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;

                if(i!=k)
                {
                    sum=sum+i;
                }
            }
        }
        cout<<sum<<endl;

        n--;
    }



    return 0;
}