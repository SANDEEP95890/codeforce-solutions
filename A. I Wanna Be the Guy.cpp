#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,a;
    set <int> pq;
    cin>>n;

    cin>>p;
    for (int i=0;i<p;i++)
        {
            cin>>a;
            pq.insert(a);
        }
    cin>>q;
    for (int i=0;i<q;i++)
        {
            cin>>a;
            pq.insert(a);
        }
    if (pq.size()==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";

    return 0;
}
