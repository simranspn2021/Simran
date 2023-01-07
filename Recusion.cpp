#include<iostream>
using namespace std;
//factorial,power
// int factorial(int n)
// {
//     if(n==0)
//     return 1;
//     int choti=n-1;
//     int badi=n*factorial(choti);
//     return badi;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<factorial(n);
//     return 0;
// }
// int power(int n)
// {
//     if(n==0)
//     return 1;
//     int choti=power(n-1);
//     int badi=2*choti;
//     return badi;
// }
// int main()
// {
//     int n=5;
//     cout<<power(n);
//     return 0;
// }
void count(int n)
{
    if(n==0)
    return ;
    cout<<n;
    count(n-1);
}
int main()
{
    int n=5;
    count(n);
    return 0;
}