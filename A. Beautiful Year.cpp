#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,a,b,c,d,flag,n;
    cin>>y;
    flag=1;
    while (flag)
    {
        y=y+1;
        n=y;
        d=n%10;
        n=n/10;

        c=n%10;
        n=n/10;

        b=n%10;
        n=n/10;

        a=n%10;
        if (a!=b && a!=c && a!=d)
        {
            if (b!=c && b!=d)
            {
                if (c!=d)
                {
                    cout<<a<<b<<c<<d;
                    flag=0;
                }
            }
        }


    }

    return 0;
}
