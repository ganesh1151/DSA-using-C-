#include<iostream>
using namespace std;

// peak element means number is not smaller than neighbor 
// there is always peak element in array if array arranged any manner 

int getPeak(int arr[], int n)
{
    int low=0, high=n-1;

    while (low<=high)
    {
        int mid=(low+high)/2;
        
        if((mid==0 || arr[mid-1]<=arr[mid]) &&
        (mid==n-1 || arr[mid+1]<=arr[mid]))
            return mid;                      //arr[mid] for peak element  
        
        if(mid>0 &&  arr[mid-1]>=arr[mid])
            high=mid-1;
        else
            low=mid+1;
    }

    return -1;    
}

int main() {
    

 int arr[] = {15, 20, 7, 30, 40, 20, 10}, n = 7;

 cout << getPeak(arr, n);

	return 0;
}