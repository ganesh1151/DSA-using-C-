// we need to find the longest subsequence that has consecutive elements.
//  These consecutive elements may appear in any order in the subsequence.

//time complexity theta(n) and auxiliary space o(n)
//there are always 2n lookups at most
//for first elements : 2+(len-1)
//for other elements : 1
//length is the length of the subsequence with the given as first
#include<iostream>
#include<unordered_set>
using namespace std;

int findLongest(int arr[], int n)
{
    unordered_set<int> s;
    int res=0;

    for(int i=0;i<n;i++)
        s.insert(arr[i]);
    
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i]-1)==s.end())
        {
            int curr=1;
            while(s.find(curr+arr[i])!=s.end())
                curr++;
            
            res=max(res,curr);
        }
    }

    return res;
}

int main()
{
    int arr[] = {1, 9, 3, 4, 2, 10, 13};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << findLongest(arr, n);
}