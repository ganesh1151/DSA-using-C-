//frequieces is nothing but number of occurances

#include<iostream>
using namespace std;

void printFreq(int arr[],int n)
{
    int freq=1,i=1;
    while (i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        
        cout<<arr[i-1]<<" "<<freq<<endl;

        i++;
        freq=1;
    }
    
}

int main() {
	
      int arr[] = {10, 10, 20, 30, 30, 30}, n = 6;

      printFreq(arr, n);
    
}