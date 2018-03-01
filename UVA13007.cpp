#include <iostream>

using namespace std;

int main()
{
    long int n,k,wyn,b,sum,liczba,suma;
    long int *tab;


    while(cin>>n)
    {
        cin>>k;
        wyn=0;

        tab = new long int[n];

        for(int i=0;i<k;i++)
        {
            cin>>b;
            sum=0;
            liczba=0;
            suma=0;
            for(int j=0;j<n;j++)
            {
                cin>> tab[j];
                suma=suma+tab[j];
                if(j>0)
                {
                    sum=sum+tab[j];
                }
            }




           // cout<<sum<<"<-sum ";

            sum=b-sum;
           // cout<<sum<<"<- b-sum ";

           if(sum<=0)
           {
               continue;
           }
            int j=10000;
            while(j>0)
            {
                if(j<=sum)
                {
                    liczba=j;
                    break;
                }
                j=j/10;
            }
            if(suma<=b)
            {
                if(liczba>tab[0])
                {
                    liczba-=tab[0];
                    wyn=wyn+liczba;
                }
            }
            else
            {

               wyn=wyn+liczba;
            }

           // cout<<wyn<<"<-"<<endl;
        }


        cout<<wyn<<endl;

        delete [] tab;


    }




    return 0;
}
