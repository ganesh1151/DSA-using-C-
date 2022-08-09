//1. insert all elements of a[] in a set theta(m)
//2. traverse through b[]. search for every elements
//   b[i] in s.a  if present
        // a) increment res
        // b) remove b[i]  form  s.a
#include<iostream>
#include<unordered_set>
using namespace std;

int intersection(int a[], int b[], int m, int n)
{
    unordered_set<int>s(a, a+m);
    int res=0;
    for(int i=0;i<n;i++)
        if(s.find(b[i])!=s.end())
        {
            res++;
            s.erase(b[i]);
        }
    
    return res;
}

int main()
{
    int arr1[] = {15, 17, 27, 27, 28, 15};
    int arr2[] = {16, 17, 28, 17, 31, 17};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << intersection(arr1,arr2, m, n);
    
    return 0;
}