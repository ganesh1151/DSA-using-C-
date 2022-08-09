//time compelxity theta(n) and auxiliary space O(n)

#include<iostream>
#include<unordered_set>
using namespace std;

int countDistinct(int arr[], int n)
{
    unordered_set<int>s(arr,arr+n);

    return s.size();
}

int main()
{
    int arr[]={15,16,27,27,28,15};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<countDistinct(arr,n);
    
    return 0;
}