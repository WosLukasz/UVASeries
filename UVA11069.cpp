#include <iostream>

using namespace std;

int main()
{
    long long int tab[80];

    tab[0] = 1;
    tab[1] = 1;
    tab[2] = 2;

    for (int i = 3; i < 78; i++)
    {
        tab[i] = tab[i - 2] + tab[i - 3];
    }

    int n;

    while (cin >> n)
    {
        cout << tab[n] << endl;
    }

    return 0;
}