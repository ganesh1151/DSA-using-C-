#include<iostream>
using namespace std;

int getWater(int arr[],int n)
{
    int res=0;
    for (int i = 1; i < n-1; i++)
    {
        int lMax=arr[i];

        for(int j=0;j<i;j++)
            lMax=max(lMax,arr[j]);

        int rMax=arr[i];
        
        for(int j=i+1;j<n;j++)
            rMax=max(rMax,arr[j]);
        
        res=res+(min(rMax,lMax))-arr[i];
    }

    return res;
    
}

int main() {
	
     int arr[] = {3, 0, 1, 2, 5}, n = 5;

     cout<<getWater(arr, n);
    
}