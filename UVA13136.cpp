#include <iostream>

using namespace std;


int w,y,z;

long long int a(long long int n);
long long int b(long long int n);
long long int c(long long int n);

long long int a(long long int n)
{
    if(n==0)
    return w;

    return 4*a(n-1)-3*b(n-1)-3*c(n-1);

}

long long int b(long long int n)
{
    if(n==0)
    return y;

    return 5*a(n-1)-4*b(n-1)-4*c(n-1);

}

long long int c(long long int n)
{
    if(n==0)
    return z;

    return b(n-1)-a(n-1);


}

long long int s(long long int n, long long int aa, long long int bb, long long int cc)
{
    if(n==0)
        return 0;

    return s(n-1,aa,bb,cc)+aa+bb+cc;
}



int main()
{
    long long int n;
    long long int k,ile;
    int ss;
    long long int sum;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>ss;


    while(ss>0)
    {
    cin>>n;
    cin>>w>>y>>z;

    //k=n%3;

    long long int aa1=a(1);
    long long int bb1=b(1);
    long long int cc1=c(1);
    long long int aa2=a(2);
    long long int bb2=b(2);
    long long int cc2=c(2);
    long long int aa3=w;
    long long int bb3=y;
    long long int cc3=z;
/*
    long long int aa=9;
    long long int bb=9;
    long long int cc=9;
*/

    sum=0;


    //sum=sum+ile*(aa+bb+cc);

    ile = n/3;
    ile=ile%10;

    sum = sum+ile*((aa1+bb1+cc1)%10);
    sum = sum%10;
    sum = sum+ile*((aa2+bb2+cc2)%10);
    sum = sum%10;
    sum = sum+ile*((aa3+bb3+cc3)%10);
    sum = sum%10;

    ile = n%3;

    if(ile == 1)
    {
        sum = sum+aa1+bb1+cc1;
        sum = sum%10;
    }else if(ile == 2)
    {
        sum = sum+aa1+bb1+cc1;
        sum = sum+aa2+bb2+cc2;
        sum = sum%10;
    }

    sum=sum%10;
    sum=(sum+10)%10;

    ios_base::sync_with_stdio(false);
    cout<<sum<<endl;

    ss--;
    }



    return 0;
}
