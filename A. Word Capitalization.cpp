#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    string s;
   cin>>s;
   int str=s[0];
   if (str>96)
   {
       a=str-32;
       cout<<a<<s.substr(1,s.size());
   }
    else
    cout<<s;
    return 0;
}
