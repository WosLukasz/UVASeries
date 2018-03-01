#include <iostream>

using namespace std;

int main()
{
    int x,y,n;
    long long int tab[26][26];

    for(int i=0;i<26;i++)
    {
        tab[i][0]=0;
        tab[0][i]=0;
        tab[i][1]=1;
        tab[1][i]=1;
    }
    for(int i=2;i<26;i++)
    {
        for(int j=2;j<26;j++)
        {
            tab[i][j]=0;

            for(int k=1;k<=i;k++)
            {
                tab[i][j]=tab[i][j]+tab[k][j-1];
            }
        }

    }
/*
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<26;j++)
        {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    cin >> n;


    while(n>0)
    {
        cin>>x>>y;

        cout<<tab[x][y]<<endl;

        n--;
    }


    return 0;
}
