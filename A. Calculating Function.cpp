#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n,t;
    cin>>n;

    if (n%2!=0)
        t=-(n+1)/2;
    else
        t=n/2;
    cout<<t;

    return 0;
}
