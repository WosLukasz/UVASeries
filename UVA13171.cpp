#include <iostream>

using namespace std;

int main()
{
    int n;
    int m,y,c;
    string s;
    bool is;

    cin >> n;

    while(n>0)
    {
        cin>>m>>y>>c;
        cin>>s;
        is=1;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='M')
            {
                m--;
            }else
            if(s[i]=='Y')
            {
                y--;
            }else
            if(s[i]=='C')
            {
                c--;
            }else
            if(s[i]=='R')
            {
                m--;
                y--;
            }else
            if(s[i]=='B')
            {
                c--;
                m--;
                y--;
            }else
            if(s[i]=='G')
            {
                y--;
                c--;
            }else
            if(s[i]=='V')
            {
                m--;
                c--;
            }

            if(m<0 || y<0 || c<0)
            {
                is=0;
                break;
            }

        }

        if(m<0 || y<0 || c<0)
        {
            is=0;
        }

        if(is==1)
        {
            cout<<"YES "<<m<<" "<<y<<" "<<c<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }


        n--;
    }





    return 0;
}
