#include<iostream>
#include<unordered_set>
using namespace std;

int unionCount(int a[], int b[], int m, int n)
{
    unordered_set<int>h(a, a+m);
    for(int i=0;i<n;i++)
        h.insert(b[i]);
    return h.size();
}

int main()
{
    int arr1[] = {2, 8, 3, 5, 6};
    int arr2[] = {4, 8, 3, 6, 1};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << unionCount(arr1, arr2, m, n);
}