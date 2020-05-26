#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,x,y,j=0;
    cin>>s>>n;

    vector <pair <int, int > > ds;

    for (int i=0;i<n;i++)
    {
        cin>>x>>y;
        if (s>x)
            s=s+y;
        else
            {
                ds.push_back(make_pair(x,y));
                j+=1;
            }

    }
    sort(ds.begin(),ds.end());

    for(int i=0;i<j;i++)
    {
        if (s>ds[i].first)
            s=s+ds[i].second;
        else
        {
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";
return 0;
}
