#include<iostream>
using namespace std;
int partition(int  arr[],int s ,int e)
{
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex and j>pivotIndex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex and j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quicksort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);  
    quicksort(arr,p+1,e);
}
int main()
{
    int arr[5]={3,4,12,45,11};  
    quicksort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}