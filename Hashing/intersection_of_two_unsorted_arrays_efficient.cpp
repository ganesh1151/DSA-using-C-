//1. insert all elements of a[] in a set theta(m)
//2. insert all elements of b[] in a set anohter set theta(n)
//3. now traverse s.a  and increment count for elements
//   that are present in s.b  o(m)

//overall time complexity is theta(m+n) and auxiliary space theta(m+n)

#include<iostream>
#include<unordered_set>
using namespace std;

int intersection(int arr1[], int m, int arr2[], int n)
{
    unordered_set<int> us;
    for(int i=0;i<m;i++)
        us.insert(arr1[i]);
    
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(us.find(arr2[i])!=us.end())
        {
            res++;
            us.erase(arr2[i]);
        }
    }

    return res;
}

int main()
{
    int arr1[] = {15, 17, 27, 27, 28, 15};
    int arr2[] = {16, 17, 28, 17, 31, 17};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << intersection(arr1, m, arr2, n);
    
    return 0;
}