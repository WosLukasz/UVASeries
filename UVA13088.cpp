#include <iostream>
#include<set>
#include <string>

using namespace std;

int main ()
{

   set<char> tab;

   int n;
   cin>>n;
   string s;


  while(n>0)
  {
      cin>>s;

      for(int i=0;i<s.length();i++)
        tab.insert(s[i]);

      set<char>::iterator it;


      if(s.length()==tab.size())
      {
         for( it=tab.begin(); it!=tab.end(); ++it)
            cout << *it;
      }
      else
      {
          int ile=s.length()-tab.size();

          it=tab.begin();

          for(int i=0;i<ile;i++)
          {
              cout<< *it;
          }

          for( it=tab.begin(); it!=tab.end(); ++it)
            cout << *it;
      }

      tab.clear();

    cout<<endl;


      n--;
  }





    return 0;
}

