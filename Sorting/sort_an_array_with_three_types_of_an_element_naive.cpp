//  a famous interview problem in which you need to segregate an array of elements containing three types of elements. The types are:

// Sort an array of 0s, 1s, 2s.
// Three-way partitioning when multiple occurrences of a pivot may exist.
// Partitioning around a range.  eg [2,5]

// here we traverse four times

#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
    int temp[n],i=0;

    for(int j=0;j<n;j++)
        if(arr[j]==0)
            temp[i++]=arr[j];


    for(int j;j<n;j++)
        if(arr[j]==1)
            temp[i++]=arr[j];

    for(int j=0;j<n;j++)
        if(arr[j]==2)
            temp[i++]=arr[j];

    for(int j=0;j<n;j++)
        arr[j]=temp[j];

}


int main() {
	
    int arr[]={0,1,1,2,0,1,1,2};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	
	for(int x:arr)
	    cout<<x<<" ";
}