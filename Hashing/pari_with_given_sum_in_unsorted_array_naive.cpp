//there are n*(n-1)/2 pair
//time completixy o(n^2) and auxiliary space o(1)

#include<iostream>
using namespace std;
bool isPair(int arr[], int n, int sum)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]+arr[j]==sum)
                return true;
    
    return false;
}

int main()
{
    int arr[] = {3, 8, 4, 7, 6, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int X = 14;
    
    cout<<isPair(arr, n, X);
    return 0;
}