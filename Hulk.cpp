#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string h,l;
    h="I hate ";
    l="I love ";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        if (i%2!=0)
            cout<<h;
        else
            cout<<l;
        if (i<n)
            cout<<"that ";
    }
    cout<<"it";
    return 0;
}
