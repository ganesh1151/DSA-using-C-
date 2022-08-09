#include<bits/stdc++.h>
using namespace std;

int repeat(int arr[], int n)
{
    bool visit[n];

    memset(visit, false,sizeof(visit));

    for(int i=0;i<n;i++)
    {
        if(visit[arr[i]])
            return arr[i];
        visit[arr[i]]=true;
    }
    return -1;
}

int main()
{
    int arr[]={0,2,1,3,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<repeat(arr,n);

    return 0;
}