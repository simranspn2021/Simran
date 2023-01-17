#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"check for even or odd without modulo operator"<<endl;
    if(n&1)
    {
        cout<<"odd";
    }
    else{
        cout<<"even";
    }
    return 0;
}