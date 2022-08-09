#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int low=0, high=n-1;
    
    while (low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;

        low++;
        high--;
    }
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90},n=9;

    cout<<"Before reversing "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    reverse(arr,n);
    cout<<"\nAfter reversing : "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}