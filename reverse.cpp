#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0;
    cin>>n;
    while(n/10!=0)
    {
        r = n%10;
        n=n/10;
        rev= (rev + r)*10;
    }
    rev += n;
    cout<<rev;
    return 0;
}
