#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int row[501];
    int col[501];
    int n,m;
    int d=1;

    int tab[501][501];

    while(cin>>n)
    {
        cin>>m;



           for(int i=1;i<=n;i++)
           {
               row[i]=0;
               for(int j=1;j<=m;j++)
               {
                   cin>>tab[i][j];
                   row[i]=row[i]+tab[i][j];
               }
           }

           for(int i=1;i<=m;i++)
           {
               col[i]=0;
               for(int j=1;j<=n;j++)
               {
                   col[i]=col[i]+tab[j][i];
               }
           }
/*
           for(int i=1;i<=n;i++)
           {
                   cout<< row[i]<< " || "<<col[i]<<endl;
           }
*/


           int maxr=row[1] , maxc=col[1];
           int mr=1,mc=1;
           for(int i=2;i<=n;i++)
           {
               if(row[i]>maxr)
               {
                   maxr=row[i];
                   mr=i;
               }
           }

           for(int i=2;i<=m;i++)
           {
               if(col[i]>maxc)
               {
                   maxc=col[i];
                   mc=i;
               }
           }

           int s=maxc+maxr-tab[mr][mc];

            int naji=1;
            int najj=1;
           int sum=row[1]+col[1]-tab[1][1];

           for(int i=1;i<=n;i++)
           {
               for(int j=1;j<=m;j++)
               {
                   if(row[i]+col[j]-tab[i][j]>sum)
                   {
                       sum=row[i]+col[j]-tab[i][j];
                       naji=i;
                       najj=j;
                   }
               }
           }
/*
        cout<<mr<<endl<<mc<<endl;

         cout<<"slabe: "<<s<<endl<<"mocne: "<<sum<<endl;
        cout<<naji<<endl<<najj<<endl;

           cout<<mr<<endl<< mc;



        cout<<*max_element(row+1,row+m+1)<<endl;
        cout<<*max_element(col+1,col+m+1);
*/
        if(s==sum)
         {
             cout<<"Case "<<d<<": Weak"<<endl;
         }
         else
        {
            cout<<"Case "<<d<<": Strong"<<endl;
        }

        d++;
    }

        return 0;
}
