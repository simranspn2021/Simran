// // //1.Checck if array is sorted or not using recursion
// // #include<iostream>
// // using namespace std;
// // bool issorted(int arr[],int n)
// // {
// //     if(n==0|| n==1)
// //     return true;
// //     if(arr[0]>arr[1])
// //     return false;
// //     else
// //     {
// //         bool ans=issorted(arr+1,n-1);
    
// //     return ans;
// //     }
// // }
// // int main()
// // {
// //     int arr[]={2,3,4,53,6};
// //     if(issorted(arr,5))
// // {
// //     cout<<"array is sorted";
// // }
// // else 
// // {
// //     cout <<"array is not sorted ";
// // }
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// int  sumarr(int arr[],int n)
// {
//     if(n==0)
//     return 0;
//     if(n==1)
//     return arr[0];

//     int choti=sumarr(arr+1,n-1);
//     int badi=choti+arr[0];

//     return badi;


// }
// int main()
// {
//     int arr[]={2,3,5,6,13};
//     cout<<sumarr(arr,5);
//     return 0;
// }
//3.Implement linear search 
// #include<iostream>
// using namespace std;
// bool linearsearch(int arr[],int n,int key )
// {
//   if(n==0)
//   {
//     return false;
//   }
//   if(arr[0]==key)
//   {
//     return true;
//   }
//   bool ans=linearsearch(arr+1,n-1,key);
//   return ans;
// }
// int main()
// {
// int arr[]={2,6,11,89,90};
// int key;
// cin>>key;
// if(linearsearch(arr,5,key))
// {
//     cout<<"elemnt found";
// }
// else 
// {
//     cout<<"elemnt not found ";
// }
//     return 0;
// }
//4.implemneting binary search using recursion
#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key)
{
    if(s>e)
    {
        return false;
    }
    int mid;
    mid=s+(e-s)/2;
    if(arr[mid]==key)
    return true;
    if (arr[mid]<key)
    {
        return binarysearch(arr,mid+1,e,key);
    }
    else 
    {
        return binarysearch(arr,s,mid-1,key);
    }
}
int main()
{
    int arr[]={2,3,4,12,67,78};
    int key=10;
    if(binarysearch(arr,0,5,key))
    {
    cout<<"element found";
    }
    else 
    {
        cout<<"not found";
    }
    return 0;
}