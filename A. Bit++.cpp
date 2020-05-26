#include<bits/stdc++.h>

using namespace std;

int X=0;
int main()
{
    int n;
    string st;
    cin>>n;

    for(int i=0;i<n;i++)
    {

        cin>>st;

        if (st=="++X")
            ++X;
        else if (st=="X++")
            X++;
        else if (st=="--X")
            --X;
        else if (st=="X--")
            X--;

    }
    cout<<X;
    return 0;
}

