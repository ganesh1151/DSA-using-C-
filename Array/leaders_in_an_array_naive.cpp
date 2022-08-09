#include<iostream>
using namespace std;
// An element is called the leader of an array if there is no element greater than it on the right side 
void leaders(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }
        if(!flag)
            cout<<arr[i]<<" ";

    }
}

int main() {
	
      int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;

      leaders(arr, n);
    
}