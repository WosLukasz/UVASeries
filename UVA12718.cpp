#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n,k,p;
    string s ;
    string c ;

    map<char,int> mapa;

        cin>>n;

        p=1;

        while(n>0)
        {

            cin>>s;

            k=0;

            for(int i=0;i<s.length();i++)
            {
                mapa.clear();
                for(int z=0;z<s.length();z++)
                {
                    mapa[s[z]]=0;
                }
                int is=0;
                int m=1;

                for(int j=i;j<s.length();j++)
                {

                  mapa[s[j]]++;

                    if( mapa[s[j]]%2!=0)
                    {
                        is++;
                    }else
                    {
                        is--;
                    }

                    if((is==1 && m%2==1) || (is==0 && m%2==0))
                    {
                        k++;
                    }

                    m++;

                }
            }

            cout<<"Case "<<p<<": "<<k<<endl;

            n--;
            p++;
        }





    return 0;
}
