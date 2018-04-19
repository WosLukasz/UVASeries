#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int k;

    cin>>n;

    while(n>0)
    {
        cin>>k;

        if(k==0 || k%3==0 || k%3==2)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }


        n--;

    }



    return 0;
}
