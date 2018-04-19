#include <iostream>
#include <limits>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;


struct Point{

float x;
float y;

};

bool cmp(Point a, Point b)
{
    if(a.y<b.y)
    {
        return 1;
    }else if(a.y>b.y)
    {
        return 0;
    }else
    {
        if(a.x<b.x)
        {
            return 1;
        }else if(a.x>=b.x)
        {
            return 0;
        }
    }
}

vector<Point> vect;

int main()
{
    int n,k;
    Point *tab;
    float x1,y1;

    cin>>n;

    while(n)
    {
        cin>>k;

        tab = new Point[k];


        for(int i=0;i<k;i++)
        {
            cin>>tab[i].x>>tab[i].y;
        }

        float mi = std::numeric_limits<float>::max();
        int min_i=0;
        int min_j=0;

        for(int i=0;i<k-1;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                if((tab[i].x-tab[j].x)*(tab[i].x-tab[j].x)+(tab[i].y-tab[j].y)*(tab[i].y-tab[j].y)<mi)
                {
                    mi=(tab[i].x-tab[j].x)*(tab[i].x-tab[j].x)+(tab[i].y-tab[j].y)*(tab[i].y-tab[j].y);

                    min_i = i;
                    min_j = j;

                }
            }

        }


        x1=(tab[min_i].x+tab[min_j].x)/2.0;
        y1=(tab[min_i].y+tab[min_j].y)/2.0;


        cout<<setprecision(3)<<fixed<<x1<<" "<<setprecision(3)<<fixed<<y1<<endl;

        n--;
    }



    return 0;
}
