// a famous interview problem in which you need to segregate an array of elements containing two types of elements. The types are:

// Segregate negative and positive elements.
// Segregate even and odd elements.
// Sort a binary array.

//time complexity theta(n) and space complexity theta(1)
//we can also use lomuto parition

//using haore parition 

#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int n)
{
    int i=-1,j=n;
    while(true)
    {
        do{i++;}while(arr[i]<0);
        do{j--;}while(arr[j]>=0);
        if(i>=j) return;
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int arr[]={13,-12,0,18,-10};

    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,n);

    for(int x : arr)
        cout<<x<<" ";
}