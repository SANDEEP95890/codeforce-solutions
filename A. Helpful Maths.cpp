#include<bits/stdc++.h>
using namespace std;

int main()
{
    int one=0,two=0,three=0;
    char arr[200];

    string s;
    cin>>s;

    for (int i=0;i<s.size();i+=2)
    {
         if (s[i]=='1')
            one+=1;
        else if (s[i]=='2')
            two+=1;
        else if (s[i]=='3')
            three+=1;
    }

    for(int i=0; i<one; i++)
    {
        cout << '1';
        if((two == 0 && three == 0) && i == one-1)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    for(int i=0; i<two; i++)
    {
        cout << '2';
        if(i== two - 1 && three == 0)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    for(int i=0; i<three; i++)
    {
        cout << '3';
        if(i == three - 1)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }

    return 0;
}
