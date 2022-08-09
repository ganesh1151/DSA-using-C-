#include<iostream>
#include<unordered_map>
using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int>h;
    for(int i=0;i<n;i++)
        h[arr[i]]++;
    
    for(auto e: h)
        cout<<e.first<<" "<<e.second<<endl;
}

int main()
{
    int arr[]={10,20,30,10,20,30,40,60,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    countFreq(arr,n);

    return 0;
}