#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,w=0;
    int a[2000];

    cin>>n>>h;
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
    {
        if ((h-a[i])>=0)
            w+=1;
        else
            w+=2;
    }
    cout<<w;

    return 0;
}
