#include<bits/stdc++.h>
using namespace std;
// C++ program to check if given array 
// has 2 elements whose sum is equal 
// to the given value

void printPairs(int arr[], int arr_size, int sum)
{
    unordered_set<int> s;
    for(int i=0;i<arr_size;i++){
        int temp=sum-arr[i];

        if(s.find(temp)!=s.end())
            cout<<"pair with given sum "<<sum<<" is ("<<arr[i]<<", "<<temp<<")"<<endl;
        s.insert(arr[i]);
    }
}