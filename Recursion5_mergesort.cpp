#include<iostream>
using namespace std;
// void merge(int arr[],int low,int high,int mid)
// {
// 	int i,j,k,c[50];
// 	i=low;
// 	k=low;
// 	j=mid+1;
// 	while(i<=mid and j<=high)
// 	{
// 		if(arr[i]<arr[j])
// 		{
// 			c[k]=arr[i];
// 			k++;
// 			i++;
// 		}
// 		else
// 		{
// 			c[k]=arr[j];
// 			k++;
// 			j++;
// 		}
// 	}
// 	while(i<=mid)
// 	{
// 		c[k]=arr[i];
// 		k++;
// 		i++;
// 	}
// 	while(j<=high)
// 	{
// 		c[k]=arr[j];
// 		k++;
// 		j++;
// 	}
// 	for(i=low;i<=high;i++)
// 	{
// 		arr[i]=c[i];
// 	}
// }
void merge(int arr[],int low,int high)
{
    int mid=(low+high)/2;
    int len1=mid-low+1;
    int len2=high-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int mainArrayIndex=low;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }
    int index1=0;
    int index2=0;
    mainArrayIndex=low;
    while(index1<len1 and index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1)
    {
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[mainArrayIndex++]=second[index2++];
    }

}

void mergesort(int arr[],int low,int high)
{
	if(low>=high)
    return ;

	int	mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,high);
	
} 
int main()
{
	int myarray[30],num;
	cout<<"Enter the number of elements";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>myarray[i];
	}
	mergesort(myarray,0,num-1);
	cout<<"After sorting elements are as follows:"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<myarray[i]<<endl;
	}
	return 0;
}