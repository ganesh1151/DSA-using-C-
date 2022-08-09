//time complexity theta (n^2) and auxilary space o(1)
#include<iostream>
using namespace std;

int largestZeroSubarray(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int c0=0,c1=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==0)
                c0++;
            else
                c1++;
            if(c0==c1)
                res=max(res,c0+c1);
        }
    }

    return res;
}

int main()
{
    int arr[] = {1, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << largestZeroSubarray(arr, n);
}