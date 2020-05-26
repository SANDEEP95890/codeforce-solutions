#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,k,t;
    int a;
    cin>>n>>k;
    if (n%2==0)
        n=n/2;
    else
        n=(n+1)/2;
    if (k > n)
        {
            k=k-n;
            a=2;
        }
    else
    {
        a=1;
    }
    t=a+(k-1)*2;
    cout<<t<<endl;
    cout<<a<<endl;
    cout<<n<<endl;



    return 0;
}
