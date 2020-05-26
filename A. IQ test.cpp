#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,k,l,m=0,j=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        if (a%2==0)
            {
                k=i;
                j+=1;
            }
        else
            {
                l=i;
                m+=1;
            }
    }
    if (m<j)
        cout<<l+1;
    else
        cout<<k+1;
    return 0;
}
