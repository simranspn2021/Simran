#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // int arr[n];//we are getting size at runtime not a good thing 
    // return 0; 
// int arr[100];
// int n;
// cin>>n;
// int* p=new int;
// cout<<sizeof(p);
// int s=2;
// int *t=&s;
// cout<<sizeof(t);
// int* arr=new int[5];
// cout<<sizeof(arr);
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+arr[i];
}
cout<<"sum of the dyanimc array is: "<<sum<<endl;
delete []arr;//for deleteing array

return 0;
}