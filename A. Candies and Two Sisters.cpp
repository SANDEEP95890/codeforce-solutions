#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        if (n==0 || n==1 || n==2)
            cout<<0<<endl;

        else
        {
            cout<<(n-1)/2<<endl;
        }

    }

    return 0;
}
