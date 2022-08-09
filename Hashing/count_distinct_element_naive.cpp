//time complexity o(n^2) and auxilary space O(1)

#include<iostream>
using namespace std;

int countDist(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        bool flag=false;

        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
            res++;
    }
    return res;
}

int main()
{
    int arr[]={10,20,30,10,20,30,40,60,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countDist(arr,n);

    return 0;
}