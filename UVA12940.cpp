#include <iostream>

using namespace std;

int main() {
    int m, n;
    string d;
    char temp;
    while (cin>>m)
        {
            cin>> d;

        n = d.length();
        int A[128] = {}, B[128] = {};

       int i = 0;
       int j = n-1;

       while (i < j) {
          temp = d[i];
          d[i] = d[j];
          d[j] = temp;
          i++;
          j--;
       }

        for (int i = 0; i < n; i++)
        {
            A[i] = d[i] - '0', B[i] = A[i];
        }

        for (int i = n-1, j = 0; i >= n/2; i--, j++)
        {
            B[j] = B[i];
        }

        int flag = 0;

        for (int i = n-1; i >= 0; i--)
            {
                if (B[i] != A[i])
                {
                    flag = B[i] > A[i];
                    break;
                }
            }

        if (flag==1)
            {
                for (int i = n-1; i >= 0; i--)
                {
                    cout<<B[i];
                }
                cout<<endl;
                m--;
            }
        for (int i = 0; i < m; i++)
        {
            A[n/2]++;
            for (int j = n/2; j <= n; j++)
            {
                if (A[j] >= 10)
                {
                    A[j+1] += A[j]/10;
                    A[j] %= 10;
                }
            }
            if (A[n]==1)
            {
                n++;
            }
            if (n%2)
            {
                for (int j = n-1; j > n/2; j--)
                {
                    cout<<A[j];
                }

                cout<<A[n/2];
                for (int j = n/2+1; j < n; j++)
                {
                    cout<<A[j];
                }

            } else
            {
                for (int j = n-1; j >= n/2; j--)
                {
                     cout<<A[j];
                }

                for (int j = n/2; j < n; j++)
                {
                    cout<<A[j];
                }

            }
            cout<<endl;
        }
    }
    return 0;
}
