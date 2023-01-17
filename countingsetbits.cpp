#include<iostream>
using namespace std;
int countsetbits(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1!=0)
        {
count++;
        }
        n=n>>1;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<countsetbits(n);
    return 0;
}