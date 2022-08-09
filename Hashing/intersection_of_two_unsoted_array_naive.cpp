#include<iostream>
using namespace std;

int intersection(int a[], int b[], int m, int n)
{
    int res=0;
    for(int i=0;i<m;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=true;
                break;
            }
        }

        if(flag==true)
            continue;
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}

int main()
{
    int arr1[] = {15, 17, 27, 27, 28, 15};
    int arr2[] = {16, 17, 28, 17, 31, 17};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << intersection(arr1,arr2, m, n);
    
    return 0;
}