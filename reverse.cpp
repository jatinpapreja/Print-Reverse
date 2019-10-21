#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0;
    cin>>n;
    ///for reversing the number, we take the last digit,add to the reverse and multiply the whole thing by 10 while n/10 is not equal to 0.
    /*Example:
    let the number be 213
        reverse = 0
        take 3,add to reverse and multiply be 10.
        we get 30. number becomes 21.
        take 1,add to reverse and multiply by 10.
        we get 310. number becomes 2.
        As 2/10==0, we add number to reverse. Hence reverse becomes 312.
        */
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
