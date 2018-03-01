#include <iostream>

using namespace std;


int tab[32][32];
int wyn;
char q;

void make(int c,int r, int w);


int main()
{
	int n;

	cin>>n;

	while (n>0)
	{
		wyn = 0;

		for(int i=0;i<32;i++)
        {
            for(int j=0;j<32;j++)
            {
                tab[i][j]=0;
            }
        }


		make(0,0,32);
		make(0,0,32);
		cout << "There are " << wyn << " black pixels." <<endl;
		n--;
	}
	return 0;
}



void make(int c,int r, int w)
{
	cin >> q;
	if (q == 'p')
	{
		make(c+w/2,r,w/2);
		make(c,r,w/2);
		make(c,r+w/2,w/2);
		make(c+w/2,r+w/2,w/2);
	}
	else if (q == 'f')
		for (int i = r; i < (r + w);++i)
			for (int j = c; j < (c + w); ++j)
				if (tab[i][j] == 0)
				{
					tab[i][j] = 1;
					wyn++;
				}
}
