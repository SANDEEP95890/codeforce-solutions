#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c;
    if (a+b>a*b)
        d=a+b;
    else
        d=a*b;
    if (d+c>d*c)
        d=d+c;
    else
        d=d*c;

    if (b+c>b*c)
        e=b+c;
    else
        e=b*c;
    if (e+a>e*a)
        e=e+a;
    else
        e=e*a;
    if (d>=e)
        cout<<d;
    else
        cout<<e;
    return 0;
}
