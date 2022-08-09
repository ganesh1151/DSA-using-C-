#include<iostream>
using namespace std;

//2 for loop pn use karu shakto pn te naive soution hoil
// taypeksha 1 for loop use karun simulatenouly check karaych adjacent barobar

bool isSorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
        if(arr[i]<arr[i-1])
            return false;
    
    return true;
}

int main() {
	
      int arr[] = {5, 12, 30, 33, 35}, n = 5;
      
      cout<<(isSorted(arr, n)? "true": "false");
    
}