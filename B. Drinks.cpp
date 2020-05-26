#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    long double s,n,o=0.0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        o+=a;
    }
    s=o/n;
    cout<<s;
    return 0;
}
