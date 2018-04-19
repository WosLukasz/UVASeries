#include <iostream>
#include <cstring>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    short int K,N;

    double tab[1<<7][1<<4];
    double sum;


    while(cin >>K)
    {
        cin>>N;
        sum=0;

        memset(tab,0,sizeof(tab));

        for(int i=0;i<=K;i++)
        {
            tab[1][i]=1;
        }

        for (int i = 2; i <= N; ++i)
            for (int j = 0; j <= K; ++j)
            {
                if (j == 0)
                    tab[i][j] = tab[i - 1][j] + tab[i - 1][j + 1];
                else if (j == K)
                    tab[i][j] = tab[i - 1][j - 1] + tab[i - 1][j];
                else
                    tab[i][j] = tab[i - 1][j - 1] + tab[i - 1][j] + tab[i - 1][j + 1];;
            }

       for(int i=0;i<=K;i++)
       {
           sum=sum+tab[N][i];
       }
     //  cout<<sum<<" | "<<pow(K+1,N)<<endl;
        cout<<setprecision(5)<<fixed<<((sum)/(double)pow((double)K+1,N))*100.0<<endl;


    }









    return 0;
}
