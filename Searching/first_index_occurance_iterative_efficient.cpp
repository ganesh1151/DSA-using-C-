#include<iostream>
using namespace std;

int firstOccruance(int arr[],int n,int x)
{
    int low=0,high=n-1;
    

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]>x)
            high=mid-1;
        else if(arr[mid]<x)
            low=mid+1;
        else
        {
            if(mid==0 || arr[mid-1]!=arr[mid])
                return mid;

            else
                high=mid-1;
        }
    }
    return -1;
}

int main() {
    
    int arr[] = {5, 10, 10, 15, 20, 20, 20}, n = 7;

	int x = 25;
	
	cout<<firstOccruance(arr, n , x);
	return 0;
}