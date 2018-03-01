#include <iostream>

using namespace std;

int main()
{
    int y[200],x[200],z[200];
    string s,t;


    while(cin>>s)
    {
        cin>>t;


        for(int i=0;i<200;i++)
        {
            x[i]=0;
            y[i]=0;
            z[i]=0;
        }



        for(int i=0;i<s.length();i++)
        {
          x[i]=s[s.length()-1-i]-'0';
        }

        for(int i=0;i<t.length();i++)
        {
          y[i]=t[t.length()-1-i]-'0';
        }

        int dl=s.length();

        if(s.length()<t.length())
        {
            dl=t.length();
        }

        for(int i=0;i<dl;i++)
        {
            z[i]=x[i]+y[i];
        }


        for(int i=0;i<dl;i++)
        {
            z[i]=x[i]+y[i];
        }
    for(int j=0;j<100;j++)
        for(int i=0;i<dl;i++)
        {
            if(z[i]==1 && z[i+1]==3)
            {
                z[i]=0;
                z[i+1]=1;
                z[i+3]+=1;
            }

            if(z[i]==1 && z[i+1]==2)
            {
                z[i]=0;
                z[i+1]=0;
                z[i+3]+=1;
            }

            if(z[i]==1 && z[i+1]==1)
            {

                    z[i+2]+=1;
                    z[i]=0;
                    z[i+1]=0;



            }

            if(z[i]==2)
            {
                if(i==0)
                {
                    z[i]=0;
                    z[i+1]+=1;
                }else
                if(i==1)
                {
                    z[i-1]+=1;
                    z[i]=0;
                    z[i+1]+=1;
                }else
                {
                    z[i]=0;
                    z[i+1]+=1;
                    z[i-2]+=1;
                }



            }

            if(z[i]==3)
            {
                if(i==0)
                {
                    z[i]=0;
                    z[i+2]+=1;
                }else
                if(i==1)
                {
                    z[i-1]+=1;
                    z[i]=0;
                    z[i+2]+=1;
                }else
                {
                    z[i]=0;
                    z[i+2]+=1;
                    z[i-2]+=1;
                }



            }
        }

        int is=1;

        for(int i=199;i>=0;i--)
        {
            if(z[i]==0 && is==1)
            {
                if(i==0)
                {
                    cout<<"0";
                }

            }else
            {
                is=0;
               cout<<z[i];
            }

        }
        cout<<endl<<endl;


        s.clear();
        t.clear();

    }




    return 0;
}
