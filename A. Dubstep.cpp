#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i;
    string s,a;
    cin>>s;
    l=s.length();
    i=0;
    while (i<l)
    {
        a=s.substr(i,3);
        if (a=="WUB")
            i+=3;
        else
            {
                cout<<s[i];
                i+=1;
                if (s.substr(i,3)=="WUB")
                    cout<<" ";
            }

    }

    return 0;
}
