#include<iostream>
using namespace std ;
int main()
{
    int a=0;
    int b=1;
    int num;
    cout<<"number upto which you want fibonacci series"<<endl;
cin>>num;
cout<<a<<endl<<b<<endl;
int c=0;
int i=2;
while(i<=num)
{
    c=a+b;
    cout<<c<<endl;
    a=b;
    b=c;
    i++;
}
return 0;
}