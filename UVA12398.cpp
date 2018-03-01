#include <iostream>
#include <map>

using namespace std;

int main()
{
    //int tab[3][3];
    string s;
    int n=1;


    while(getline(cin,s))
    {

          map<char,int> tab;
          map<char,int>::iterator it=tab.begin();

          tab['a']=0;
          tab['b']=0;
          tab['c']=0;
          tab['d']=0;
          tab['e']=0;
          tab['f']=0;
          tab['g']=0;
          tab['h']=0;
          tab['i']=0;



          for(int i=0;i<s.length();i++)
            {
               if(s[i]=='a')
               {
                   //cout<<"a"<<endl;
                   if(tab['a']!=9)
                   tab['a']++;
                   else
                    tab['a']=0;
                   if(tab['b']!=9)
                   tab['b']++;
                   else
                    tab['b']=0;
                   if(tab['d']!=9)
                   tab['d']++;
                   else
                    tab['d']=0;
               }else if(s[i]=='b')
               {
                   //cout<<"b"<<endl;

                   if(tab['a']!=9)
                   tab['a']++;
                   else
                    tab['a']=0;
                   if(tab['b']!=9)
                   tab['b']++;
                   else
                    tab['b']=0;
                   if(tab['c']!=9)
                   tab['c']++;
                   else
                    tab['c']=0;
                    if(tab['e']!=9)
                   tab['e']++;
                   else
                    tab['e']=0;
               }else if(s[i]=='c')
               {
                   //cout<<"c"<<endl;


                   if(tab['c']!=9)
                   tab['c']++;
                   else
                    tab['c']=0;
                   if(tab['b']!=9)
                   tab['b']++;
                   else
                    tab['b']=0;
                   if(tab['f']!=9)
                   tab['f']++;
                   else
                    tab['f']=0;

               }else if(s[i]=='d')
               {
                   //cout<<"d"<<endl;


                   if(tab['a']!=9)
                   tab['a']++;
                   else
                    tab['a']=0;
                   if(tab['d']!=9)
                   tab['d']++;
                   else
                    tab['d']=0;
                   if(tab['g']!=9)
                   tab['g']++;
                   else
                    tab['g']=0;
                    if(tab['e']!=9)
                   tab['e']++;
                   else
                    tab['e']=0;
               }else if(s[i]=='e')
               {
                   //cout<<"e"<<endl;



                   if(tab['d']!=9)
                   tab['d']++;
                   else
                    tab['d']=0;
                   if(tab['b']!=9)
                   tab['b']++;
                   else
                    tab['b']=0;
                   if(tab['f']!=9)
                   tab['f']++;
                   else
                    tab['f']=0;
                    if(tab['e']!=9)
                   tab['e']++;
                   else
                    tab['e']=0;
                    if(tab['h']!=9)
                   tab['h']++;
                   else
                    tab['h']=0;
               }else if(s[i]=='f')
               {
                   //cout<<"f"<<endl;


                    if(tab['c']!=9)
                   tab['c']++;
                   else
                    tab['c']=0;
                   if(tab['e']!=9)
                   tab['e']++;
                   else
                    tab['e']=0;
                   if(tab['f']!=9)
                   tab['f']++;
                   else
                    tab['f']=0;
                    if(tab['i']!=9)
                   tab['i']++;
                   else
                    tab['i']=0;
               }else if(s[i]=='g')
               {
                   //cout<<"g"<<endl;



                    if(tab['d']!=9)
                   tab['d']++;
                   else
                    tab['d']=0;
                   if(tab['g']!=9)
                   tab['g']++;
                   else
                    tab['g']=0;
                   if(tab['h']!=9)
                   tab['h']++;
                   else
                    tab['h']=0;

               }else if(s[i]=='h')
               {
                   //cout<<"h"<<endl;


                    if(tab['g']!=9)
                   tab['g']++;
                   else
                    tab['g']=0;
                   if(tab['e']!=9)
                   tab['e']++;
                   else
                    tab['e']=0;
                   if(tab['h']!=9)
                   tab['h']++;
                   else
                    tab['h']=0;
                    if(tab['i']!=9)
                   tab['i']++;
                   else
                    tab['i']=0;
               }else if(s[i]=='i')
               {
                   //cout<<"i"<<endl;

                    if(tab['i']!=9)
                   tab['i']++;
                   else
                    tab['i']=0;
                   if(tab['h']!=9)
                   tab['h']++;
                   else
                    tab['h']=0;
                   if(tab['f']!=9)
                   tab['f']++;
                   else
                    tab['f']=0;
               }
            }

            for(it=tab.begin();it!=tab.end();it++)
            {

                //cout<<it->second<<endl;
                if((it->second)>9)
                {
                    (it->second)=9;
                }
            }

          cout<<"Case #"<<n<<":"<<endl;
          cout<<tab['a']<<" "<<tab['b']<<" "<<tab['c']<<endl;
          cout<<tab['d']<<" "<<tab['e']<<" "<<tab['f']<<endl;
          cout<<tab['g']<<" "<<tab['h']<<" "<<tab['i']<<endl;


          n++;

                //cin.ignore();
    }



    return 0;
}
