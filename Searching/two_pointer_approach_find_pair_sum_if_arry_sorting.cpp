#include<iostream>
using namespace std;

// Find pair in sorted array which gives sum X if array is sorted 

bool isPresent(int arr[], int n, int sum)
{
    int low=0,high=n-1;
    while (low<high)
    {
        if(arr[low]+arr[high]==sum)
            return true;
        else if(arr[low]+arr[high]>sum)
            high--;
        else
            low++;     
    }

    return false;   
}

int main()
{
    int arr[] = {2, 3, 7, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 14;
    
    cout << isPresent(arr, n, sum);
}