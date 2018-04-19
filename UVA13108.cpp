#include <iostream>

using namespace std;

int main()
{
    int k;
    int n;

    cin>>k;

    while(k>0)
    {

        cin>>n;

        cout<<(int)(((n*n*n*n-6.0*n*n*n+23.0*n*n-18.0*n)/24)+1.0)<<endl;

        k--;
    }

    return 0;
}
