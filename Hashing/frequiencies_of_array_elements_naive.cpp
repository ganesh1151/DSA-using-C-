//time complexity O(n^2) and auxiliary space O(1)
#include<iostream>
using namespace std;

void printFreq(int arr[], int n)
{
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

        if(flag==true)
            continue;
        int freq=1;
        for(int j=i+1;j<n;j++)
            if(arr[i]==arr[j])
                freq++;
        
        cout<<arr[i]<<" "<<freq<<endl;
    }
}

int main()
{
    int arr[]={10,20,30,10,20,30,40,60,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    printFreq(arr,n);

    return 0;
}