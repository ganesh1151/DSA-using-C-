//selection sort is comparsion base algorithm
//it takes less memory as compare to other algorthitm 
//it is not stable 
// it does not require extra memory for sorting 


// This method sorts, a set of unsorted elements in two steps.
// • In the first step, find the smallest element in the structure.
// • In the second step, swap the smallest element with the
// element at the first position.
// • Then, find the next smallest element and swap with the
// element at the second position.
// • Repeat these steps until all elements get arranged at proper
// positions.


#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
                min_ind=j;
        }
        if(min_ind!=i)
            swap(arr[i],arr[min_ind]);
    }
}

int main()
{
    int a[] = {2, 1, 3, 4};
	selectionSort(a, 4);
	for(int i = 0;i < 4; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}