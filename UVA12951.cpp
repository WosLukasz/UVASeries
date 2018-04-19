#include <iostream>

using namespace std;

int main()
{
   int n,c,s;
   int ma,nie,nma;

   while(cin>>n)
   {
       cin>>c;
       cin>>s;

       ma= -s-c;
       nie = 0;

       for(int i=0;i<n-1;i++)
       {
           cin>>s;
           nma = max(ma,nie-s-c);
           nie= max(ma+s,nie);
           ma=nma;
       }
       cout<<max(ma,nie)<<endl;
   }
    return 0;
}
