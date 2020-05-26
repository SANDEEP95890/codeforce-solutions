#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x,y,z,d,a,b,c;
    int e[4];
    for (int i=0;i<4;i++)
        cin>>e[i];

    sort(e,e+4);
    x=e[0];
    y=e[1];
    z=e[2];
    d=e[3];

    if (x==y && y==z && z==x)
        cout<<d/3<<" "<<d/3<<" "<<d/3;
    else
        cout<<d-y<<" "<<d-z<<" "<<d-x;

    return 0;
}
