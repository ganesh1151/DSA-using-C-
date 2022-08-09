// Given an array of distinct integers, find the closest (positive wise) 
// greater on left of every element. If there is no greater element on left,
//  then print -1

#include<iostream>
using namespace std;

void printPrevGreater(int arr[], int n)
{
    for(int i=0;i<n;i++){
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1)
            cout<<-1<<" ";
    }
}

int main()
{
    int arr[]={20,30,10,5,15};
    int n=5;
    printPrevGreater(arr,n);
    return 0;
}

