#include<iostream>
using namespace std;
int main()
{
    //creation of jaggered array 
    //jaggered array can be defined as the array of array where member array can be of 
    //of different size i.e columns are diff in number as compare to rows
    int *arr[3];
arr[0]=new int[3];
arr[1]=new int[2];
arr[2]=new int[2];
    return 0;
}