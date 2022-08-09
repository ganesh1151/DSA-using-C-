#include<iostream>
#include<unordered_map>
using namespace std;

int largestZeroSubarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        arr[i]=(arr[i]==0) ? -1: 1;
    
    unordered_map<int, int>m;
    int prefix_sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];
        if(prefix_sum==0)
            res==i+1;
        if(m.find(prefix_sum)==m.end())
            m.insert({prefix_sum,i});
        if(m.find(prefix_sum)!=m.end())
            res=max(res,i-m[prefix_sum]);
    }

    return res;
}

int main()
{
    int arr[] = {1, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << largestZeroSubarray(arr, n);
}