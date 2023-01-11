// // //Reverse of the string
// // #include<iostream>
// // using namespace std;
// // void reverse(string& s,int low,int end)
// // {
// // if(low>end)
// // return;
// // swap(s[low],s[end]);
// // low++;
// // end--;
// // reverse(s,low,end);

// // }
 
// // int main()
// // {
// //      string s="simran";
// //      int n=s.length();
// //     reverse(s,0,n-1);
// //     cout<<s;
// //     return 0;
// // }
// //check palindrome 
// #include<iostream>
// using namespace std;
// bool checkpalindrome(string s,int low ,int end)
// {
//     if(low>end)
//     return false;

//     if(s[low]!=s[end])
//     return false;
// low++;
// end--;
// checkpalindrome(s,low,end);
// }
// int main()
// {
//  string s="abba";
//  int n=s.length();
//     if(checkpalindrome(s,0,n-1))
//     {
//         cout<<"it is palindrome";
//     }
//     else{
//         cout<<"no it is not palindrome";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int power(int a,int b)
// {
//     if(b==0)
//     {
//         return 1;
//     }
//     if(b==1)
//     {
//         return a;
//     }
    
//     int bdi=power(a,b/2);
//     if(b%2==0)
//     {
//         return bdi*bdi;
//     }
//     else 
//     {
//         return a*bdi*bdi;
//     }
    
// }
// int main()
// {
// int a,b;
// cin>>a>>b;
// cout<<power(a,b);
//     return 0;
// }
#include<iostream>
using namespace std;
void bubblesort(int *arr,int n)
{
    //basecase 
    if(n==0 || n==1 )
    return ;
    //for getting the first maximum element at the end 
    for(int i=0;i<n-1;i++)
    {
if(arr[i]>arr[i+1])
swap(arr[i],arr[i+1]);
    }
    bubblesort(arr,n-1);
}
int main()
{
    int arr[]={2,3,4,12,67,11,1};
    bubblesort(arr,7);
    cout<<"after sorting ";
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}