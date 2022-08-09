//time complexity theta(n) auxilary space o(n)
#include<iostream>
#include<unordered_map>
using namespace std;

int largestSubarrayWithSumX(int arr[], int n, int sum)
{
    unordered_map<int,int> m;
    int prefix_sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];
        if(prefix_sum==sum)
            res==i+1;
        if(m.find(prefix_sum)==m.end())
            m.insert({prefix_sum,i});
        if(m.find(prefix_sum-sum)!=m.end())
            res=max(res,i-m[prefix_sum-sum]);
    }

    return res;
}

int main()
{
    int arr[] = {8, 3, -7, -4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = -8;
    
    cout << largestSubarrayWithSumX(arr, n, sum);
    
}