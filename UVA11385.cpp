#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class moja{

public:

    char a;
    long long int z;

    moja()
    {
        a=NULL;
        z=0;
    }

    moja(char aa)
    {
        a=aa;
    }


    bool operator <(const moja &mm)
    {
        if(this->z<mm.z)
        {
            return 1;
        }
        return 0;
    }


};



int main()
{
    int n,k;
    moja *m;
    char h;
    string s;

    cin>>n;

    while(n>0)
    {
        cin>>k;

        m = new moja[k];

        for(int i=0;i<k;i++)
        {
            cin>>m[i].z;
        }

        cin.ignore();

        getline(cin,s);

        int j=0;

        for(int i=0;i<s.length();i++)
        {
            if(j<k && isalpha(s[i]) && isupper(s[i]))
            {
                m[j].a=s[i];
                j++;
            }
        }

        sort(m,m+k);


        long long int fib1=1;
        long long int fib2=1;
        long long int fibn=2;

        long long int tab [k+15];

        tab[0]=1;

        int z=0;

        for(int i=0;i<k+10;i++)
        {
            fibn=fib1+fib2;

            tab[i+1]=fibn;
            fib1=fib2;
            fib2=fibn;
        }

        int v=0;

        for(int i=0;i<k;i++)
        {
            if(v<k+11 && m[i].z==tab[v])

            cout<<m[i].a;
            else
            {
               cout<<" "<<m[i].a;
               v++;

            }
            v++;
        }
        cout<<endl;

        n--;
    }



    return 0;
}
