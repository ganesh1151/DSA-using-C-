// Stock span is defined as a number of consecutive days prior to the current day 
// when the price of a stock was less than or equal to the price at current day
#include<iostream>
using namespace std;

void printSpan(int arr[], int n){
    for(int i=0;i<n;i++){
        int span=1;
        for(int j=i-1;j>=0 && arr[j]<=arr[i];j--)
            span++;
        cout<<span<<" ";
    }
}

int main()
{
    int arr[]={18,12,13,14,11,16};
    int n=6;
    printSpan(arr,n);
    return 0;
}