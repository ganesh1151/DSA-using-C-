#include<iostream>
using namespace std;

int lastOccurance(int arr[],int n, int x)
{
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
            high=mid-1;
        else if(arr[mid]<x)
            low=mid+1;
        else
        {
            if(mid==n-1 || arr[mid+1]!=arr[mid])
                return mid;
            else
                low=mid+1;
        }
    }
    return -1;
}

int main() {
    
   int arr[] = {5, 10, 10, 10, 10, 20, 20}, n = 7;

	int x = 20;

    cout << lastOccurance(arr, n, x);
	return 0;
}