 #include<iostream>
 using namespace std;
// #define PI 3.14 //macros
// int a=90;//global variable
// void print()
// {
//     int a=1;
//     cout<<a;
// }
void print(int arr[],int n,int start=0)//default argument (if it is not compulsory to add third argument )
{
    for(int i=start;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
inline void update(int n)
{
    n=n+1;
    cout<<n;
}
 int main()
 {
    // int r=4;
    // double area=PI*r*r;
    // //PI=PI+1;//we cant change and even memoery is not occupied 
    // cout<<area;
    // int a=5;
    // {
    //     int a=2;
    //     cout<<a;//scope within the block 
    // }
    // cout<<a;//scope within the main
// cout<<a;
// print();
//ternary operator--- condition?value if true:value if false
int n;
cin>>n;
update(n);
int arr[]={2,3,4,5};
print(arr,4);
    return 0;
 }