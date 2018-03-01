#include <iostream>

using namespace std;

int main()
{
    long long int tab[41];

    tab[0]=0;
    tab[1]=1;
    tab[2]=5;
    tab[3]=11;

    for(int i=4;i<41;i++)
    {
        tab[i]=tab[i-1]+ 4*tab[i-2] + 2*tab[i-3];
    }
    int n,x;

    cin>>n;

    while(n>0)
    {
        cin>>x;

        cout<<tab[x]<<endl;

        n--;
    }


    return 0;
}
