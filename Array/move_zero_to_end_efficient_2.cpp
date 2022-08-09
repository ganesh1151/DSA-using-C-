#include<bits/stdc++.h>
using namespace std;

void moveToEnd(int arr[],int n)
{
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0 && i<n-count)
        {
            swap(arr[i],arr[n-count]);
            count++;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 0, 30, 50, 60}, n = 6;

    cout<<"Before Moving"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    moveToEnd(arr,n);

    cout<<"\nAfter Moving"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;

}