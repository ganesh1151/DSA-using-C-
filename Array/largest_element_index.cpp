#include<iostream>
using namespace std;

int largetInx(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)
        if(arr[i]>arr[res])
            res=i;

    return res;
}

int main()
{
    int arr[]={10,20,30,80,50,60}, n=6;
    cout<<largetInx(arr,n);

    return 0;
}