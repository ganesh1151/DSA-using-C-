#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int k){
    sort(arr,arr+n);
    return arr[k-1];
}

int main()
{
    int arr[]={10,5,30,12};

    int n=sizeof(arr)/sizeof(arr[0]);

    int k=2;

    cout<<kthSmallest(arr,n,k);
}