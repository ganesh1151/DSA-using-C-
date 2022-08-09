//a worst case O(n^2) sorting algorithm
//does minimum memory writes and can be useful for cases where  memory in  write in costly
//in place and not stable
//useful to solve qustion like find minimum swaps required to sort an array


#include<iostream>
using namespace std;

void cycleSortDistinct(int arr[], int n)
{
    for(int cs=0;cs<n-1;cs++)    // jo first elemetn aahe taypeksha small kiti element aahe te count karaych aahi to element taychy
    {                                   // correct position la fix karaycha
        int item=arr[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++)
            if(arr[i]<item)
                pos++;
        swap(item,arr[pos]);
        while (pos!=cs)      // jo paryant first element taychy position la yet nahi to paryant hi process chalete
        {
            pos=cs;
            for(int i=cs+1;i<n;i++)
                if(arr[i]<item)
                    pos++;
            swap(item,arr[pos]);
        }
    }
}

int main() 
{ 
    int arr[] = { 20,40,50,10,30 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cycleSortDistinct(arr, n); 
   
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
    return 0; 
} 