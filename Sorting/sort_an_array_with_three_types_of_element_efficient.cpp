//  a famous interview problem in which you need to segregate an array of elements containing three types of elements. The types are:

// Sort an array of 0s, 1s, 2s.
// Three-way partitioning when multiple occurrences of a pivot may exist.
// Partitioning around a range.  eg [2,5]


//here we  use dutch national flag algorithm
// here we traverse only  one times
// time complexity O(n) and space complexity is O(1) because we are not use extra space 

#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    int l=0,h=n-1,mid=0;
    while(mid<=h)
    {
        switch(arr[mid])
        {
            case 0:
                swap(arr[l],arr[mid]);
                l++;
                mid++;
                break;
            
            case 1:
                mid++;
                break;
            
            case 2:
                swap(arr[h],arr[mid]);
                h--;
                break;
        }
    }
}

int main() {
	
    int arr[]={0,1,1,2,0,1,1,2};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	
	for(int x:arr)
	    cout<<x<<" ";
}