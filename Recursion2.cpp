// //fibonacci number 
// //qus will give the value of n and u have to return the fib number related to it 
// #include<iostream>
// using namespace std;
// int fib(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
// return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main()
// {
//     int n=3;
//     cout<<fib(3);
//     return 0;
// }
//2.Count ways to reach nth stairs by diff number of ways ,a person can move only 1 or 2 stairs 
// #include<iostream>
// using namespace std;
// int count(int n)
// {
//     if(n<0)
//     return 0;
//     if(n==0)
//     return 1;

//     return count(n-1)+count(n-2);
// }
// int main()
// {
//     int n=5;
// int ans=count(n);
// cout<<ans;
//     return 0;
// }
// 3.Say digits 
#include<iostream>
using namespace std;
void saydigit(int digit,string arr[])
{
    if(digit==0)
    return ;
    int s=digit%10;
    digit=digit/10;
    saydigit(digit,arr);
    cout<<arr[s];

}
int main()
{
    int digit;
    cin>>digit;
    string arr[10]={"zero","one ","two","three","four","five","six","seven","eight","nine"};
    saydigit(digit,arr);
    return 0;
}