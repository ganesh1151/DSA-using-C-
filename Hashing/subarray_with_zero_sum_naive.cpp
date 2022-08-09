//time complexity o(n^2)
#include<iostream>
using namespace std;

bool isZeroSubarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {   
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum+=arr[j];
            if(curr_sum==0)
                return true;
        }
    }

    return false;
}

int main()
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << isZeroSubarray(arr, n);

    return 0;
}