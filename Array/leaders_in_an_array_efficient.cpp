#include<iostream>
using namespace std;

// An element is called the leader of an array if there is no element greater than it on the right side 

void leaders(int arr[],int n)
{
    int curr_ldr=arr[n-1];
    cout<<curr_ldr<<" ";

    for(int i=n-2;i>=0;i--)
    {
        if(curr_ldr<arr[i])
        {
            curr_ldr=arr[i];
            cout<<curr_ldr<<" ";
        }
    }
}

int main() {
	
      int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;

      leaders(arr, n);
    
}