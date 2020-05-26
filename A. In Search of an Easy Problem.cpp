#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if (a[i]==1)
            {
                cout<<"HARD";
                return 0;
            }
    }
    cout<<"EASY";
    return 0;
}
