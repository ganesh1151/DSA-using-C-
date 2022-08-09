//sort the activity according their finish time 

#include<bits/stdc++.h>
using namespace std;

//Pair is used to combine together two values that may be different in type. 
// Pair provides a way to store two heterogeneous objects as a single unit. 
// It is basically used if we want to store tuples.

bool myCmp(pair <int,int> a, pair <int, int> b)
{
    return (a.second<b.second);
}

int maxActivities(pair <int,int> arr[], int n)
{
    sort(arr,arr+n,myCmp);

    int prev=0;
    int res=1;

    for(int curr=1;curr<n;curr++)
    {
        if(arr[curr].first>=arr[prev].second)
        {
            res++;
            prev=curr;
        }
    }

    return res;
}

int main()
{
    pair<int,int>arr[]={make_pair(12,25), make_pair(10,20),make_pair(20,30)};

    int n=3;

    cout<<maxActivities(arr,n);

    return 0;
}
