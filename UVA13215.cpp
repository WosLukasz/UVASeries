#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{
    int n,t;

    cin>>n;

    while(n)
    {
        cin>>t;

        char s;
        double x,a,b,odjac;
        int stat;
        bool is;


        a=0;
        b=0;
        stat=0;
        odjac=0;
        is=1;


       for(int i=0;i<t;i++)
       {
           cin>>s>>x;

           if(stat<=1)
               {
                  a=a+x;
               }



           if(s=='C')
           {
               odjac=odjac+(x*x);
               stat++;
           }else
           if(s=='S')
           {
               odjac=odjac+(x*x);
           }else
           if(s=='T')
           {
               odjac=odjac+((x*x*sqrt(3))/4);
           }

           if(stat>1 && stat<3)
               {
                   b=b+x;
               }

               if(stat==3 && is==1)
               {
                   is=0;
                   b=b+x;
               }


       }


       printf("%.4lf\n", a*b-odjac);
        //cout<<setprecision(6)<<a*b-odjac<<endl;




        n--;
    }






    return 0;
}
