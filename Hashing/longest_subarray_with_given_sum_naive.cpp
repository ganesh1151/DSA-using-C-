// time complexity theta(n^2) and auxiliary space O(1)

#include<iostream>
using namespace std;

int largestSubarrayWithSumX(int arr[], int n, int sum)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum+=arr[j];
            if(curr_sum==sum)
                res=max(res,j-i+1);
        }
    }
    return res;
}

int main()
{
    int arr[] = {5,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 5;
    
    cout << largestSubarrayWithSumX(arr, n, sum);
    
}