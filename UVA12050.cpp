#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    long long int n,ilosc,k,ile,make,z;
    char s[64];
    stringstream ss;

    long long int d[20];

	d[1] = d[2] = 9;

	for(int i = 3; i < 20; i += 2)
    {
        d[i] = d[i+1] = d[i-1] * 10;
    }



    while(1)
    {
        cin>>n;
        if(n==0){break;}

        ilosc=9;
        k=1;
        make=1;
        ile =1;


        for(int f=1;f<20;f++)
        {
            if(d[f]<n)
            {
                n=n-d[f];
            }
            else
            {
                break;
            }


                ile++;


                if(f%2 == 0)
                {
                    make *= 10;

                }

        }

        for(int f=0;f<64;f++)
        {
            s[f]='0';
        }





/*
            while(ilosc<n)
            {


                //cout<<ilosc<<" -= "<<ile<< endl;
                n-=ilosc;
               // cout<<n<<"<-to"<<endl;
                if(ile%2==1)
                {
                    k=k*10;


                }
                else
                {
                     make = make *10;
                }
                ile++;
                ilosc=ilosc+9*k;

            }
*/
            //ile+=1;
                //cout<<ile<<"<- ile"<<endl;


            n=n+make-1;

            k=n;
            z =0;

            while(k>0)
            {
                k=k/10;
                z++;
            }



       // cout<<z<<" z "<<endl;
        //cout<<n<<"<-to"<<endl;


        ss.clear();
        int i;
        char c;

        sprintf(s, "%lld", n);

        /*
        for(i=0;i<z;i++)
       {
           ss.clear();
           //cout<<z-i-1<<" <- wynik"<<endl;
          // ss << n%10;

          // ss >> c;

           c= static_cast<char>(n%10+48);
            cout<<"tu"<<endl;
           s[z-i-1]=c;

           //s[z-i-1]=(n%10) -'0';

           n=n/10;
       }

*/
       for(i=0;s[i];i++)
       {
           cout<<s[i];
       }

      // cout<<i<<" <-"<<endl;


      // cout<<ile<<" <-ile"<<endl;
       if(ile%2) i--;

      // i=i-1;
        //cout<<i<<" <-"<<endl;
       for(i--;i>=0;i--)
       {
           cout<<s[i];
       }
        cout<<endl;






    }

    return 0;
}
