// a famous interview problem in which you need to segregate an array of elements containing two types of elements. The types are:

// Segregate negative and positive elements.
// Segregate even and odd elements.
// Sort a binary array.

#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
    int temp[n],i=0;

    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
            temp[i++]=arr[j];
    }

    for(int j=0;j<n;j++)
    {
        if(arr[j]>=0)
            temp[i++]=arr[j];
    }

    for(int j=0;j<n;j++)
        arr[j]=temp[j];
}

int main() {
	
    int arr[]={13,-12,18,-10};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	
	for(int x:arr)
	    cout<<x<<" ";
}