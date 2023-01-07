#include<iostream>
using namespace std;
int main()
{//creation of 2d array of n*n using dynamic memory allocation
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;}
    //cleaning the memory we need to dlete the columns first then row 
    for(int i=0;i<n;i++)
    {
        delete[] arr[i];
    }
    delete[]arr;
    return 0;
} 
