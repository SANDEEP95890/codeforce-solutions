#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,petya,vasya,tonya,problems=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>petya>>vasya>>tonya;
        if (petya+vasya+tonya>=2)
            problems += 1;
    }
    cout<<problems;

    return 0;
}
