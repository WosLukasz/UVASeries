#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long int tab[31];

    tab[1]=1;
    tab[2]=4;

    for(int i=3;i<31;i++)
    {
        tab[i]=pow(2,i+1)-4;
    }

    int n,k;

    cin>>n;
    while(n>0)
    {
        cin>>k;

        cout<<tab[k]<<endl;

        n--;
    }


    return 0;
}
