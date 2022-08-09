//Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.
//here we only need to keep track of small and large element
//i.e mainting hte small and large

#include<iostream>
using namespace std;

int maxDiff(int arr[],int n)
{   
    int res=arr[1]-arr[0], minVal=arr[0];

    for(int i=1;i<n;i++)
    {
        if(res<(arr[i]-minVal))  
            res=arr[i]-minVal;

        if(minVal>arr[i])
            minVal=arr[i];

    }
    return res;
}

int main() {
	
      int arr[] = {2, 3, 10, 6, 4, 8, 1}, n = 7;

      cout<<maxDiff(arr, n);
    
}