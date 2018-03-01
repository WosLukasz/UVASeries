#include <iostream>
#include <string>

using namespace std;

int main ()
{
   std::string s;
   int k;
   int n;

   while(1)
    {
          cin>>k;

          if(k==0){break;}

            cin.clear();
            s.clear();
            cin.ignore();
           getline(cin,s);

           int i=0;

           k=((k%26)+26)%26;

           while(i<s.length())
           {
               if(isalpha(s[i]))
               {
                   if(s[i]>='A' && s[i]<='Z')
                    s[i]=(((int)s[i]-'A'+k)%26)+'A';
                else if(s[i]>='a' && s[i]<='z')
                    s[i]=(((int)s[i]-'a'+k)%26)+'a';
               }

               i++;
           }
             cout<<s<<endl;

    }

    return 0;
}

