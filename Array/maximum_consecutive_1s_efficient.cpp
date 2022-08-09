#include<iostream>
using namespace std;

int maxConsecutiveOnes(int arr[], int n)
{
    int res=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            count=0;
        else
            count++;
            res=max(res,count);
    }

    return res;
}

int main() {
	
     int arr[] = {0, 1, 1, 0, 1, 1, 1}, n = 7;

     cout<<maxConsecutiveOnes(arr, n);
    
}