#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

	int f[1024] = {1};
	int ogon = 0;
	int cykl = 1;
	int n;
	string s;

	int c[101] = {};
	int x = 1;
	for (int i = 1; ; i++)
        {
            x = (x*66)%100;
            f[i] = x;
            if (c[x]!=0) {
                ogon = c[x]-1;
                cykl = i - c[x];
                break;
            }
            c[x] = i;
        }

	cin>>n;

	while (n>0)
        {
            cin>>s;

            int k = s.length();

            if (k < 2)
                {
                    int x;
                    stringstream ss;
                    ss.clear();
                    ss << s;
                    ss >> x;

                    if (x <= 1)
                        cout<<f[x]<<endl;
                    else
                        cout<<f[(x-2)%5+2]<<endl;
                }else
                {
                    cout<<f[(s[k-1]-'0'+3)%5+2]<<endl;
                }



            n--;
        }

	return 0;
}
