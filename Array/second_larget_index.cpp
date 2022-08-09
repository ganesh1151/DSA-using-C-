#include <iostream>
using namespace std;

int secondLargest(int arr[],int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
            if(res==-1 || arr[i]>arr[res])
                res=i;
    }
    return res;
}

int main()
{
    int arr[]={10,20,30,80,90,60}, n=6;
    cout<<secondLargest(arr,n);

    return 0;
}

