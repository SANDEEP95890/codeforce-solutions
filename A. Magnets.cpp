#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,g=1;
    cin>>n;
    cin>>a;
    for (int i=0;i<n-1;i++)
    {
        cin>>b;
        if (a!=b)
            g+=1;
        a=b;
    }
    cout<<g;
    return 0;
}
