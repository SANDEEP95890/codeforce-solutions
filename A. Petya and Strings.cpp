#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;

    for(int i=0;i<str1.size();i++)
    {
        if (tolower(str1[i]) < tolower(str2[i]))
           {
             cout<<-1;
             break;
           }
        else if (tolower(str1[i]) > tolower(str2[i]))
            {
                cout<<1;
                break;
            }
        else if (str1.size()-1 == i)
            cout<<0;

    }

    return 0;
}
