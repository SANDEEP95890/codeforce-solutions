#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,same=1;
    string player;
    cin>>player;
    if (player.size()<7)
    {
     cout<<"NO";
    }
    else
    {
       for (i=0;i<player.size()-1;++i)
       {
        if (player[i] == player[i+1])
        {
            same+=1;

            if (same==7)
                {
                    cout<<"YES";
                    return 0;
                }
        }
        else same=1;

       }
        cout<<"NO";
    }
    return 0;
}
