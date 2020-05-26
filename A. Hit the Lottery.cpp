#include<iostream>
using namespace std;
int main()
{
    int n,h=0,tw=0,te=0,f=0;
    cin>>n;
    if (n>=100)
        {
            h=n/100;
            n=n-h*100;
        }
        if (n>=20)
        {
            tw=n/20;
            n=n-tw*20;
        }
    if (n>=10)
        {
            te=n/10;
            n=n-te*10;
        }
        if (n>=5)
        {
            f=n/5;
            n=n-f*5;
        }
        cout<<h+tw+te+f+n<<endl;


    return 0;
}
