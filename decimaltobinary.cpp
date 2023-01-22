#include<iostream>
#include<MATH.H>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int answer=0;
    int digit=0;
    while(n!=0)
    {
        digit=n&1;
        n=n>>1;
        answer=answer+(digit*pow(10,i));
        i++;
    }
    cout<<"binary representation of n is "<<endl<<answer;
    return 0;
}