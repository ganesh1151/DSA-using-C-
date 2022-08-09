#include<iostream>
using namespace std;

int lastOccurance(int arr[],int low,int high, int x,int n)
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;

    if(arr[mid]>x)
        return lastOccurance(arr,low,mid-1,x,n);
    else if(arr[mid]<x)
        return lastOccurance(arr,mid+1,high,x,n);
    else
    {
        if(mid==n-1 || arr[mid+1]!=arr[mid])
            return mid;
        else
            return lastOccurance(arr,mid+1,high,x,n);
    }
    return -1;
}

int main() {
    
   int arr[] = {5, 10, 10, 10, 10, 20, 20}, n = 7;

	int x = 25;

    cout << lastOccurance(arr, 0, n - 1, x,n);
	return 0;
}