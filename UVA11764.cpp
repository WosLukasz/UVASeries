#include <iostream>

using namespace std;

int main()
{
    int s ,n;
    int tab[50];

    cin>>s;

    for(int i=0; i<s;i++)
    {
        cin>>n;

        for(int j=0;j<n;j++)
        {
            cin>>tab[j];

        }

        int low = 0, high=0;


        for(int k=0;k<n-1;k++)
        {
            if(tab[k+1]>tab[k])
            {
                high++;

            }
            if(tab[k+1]<tab[k])
            {
                low++;

            }


        }

        cout<<"Case "<<i+1<<": "<<high << " "<<low<<endl;




    }


    return 0;
}