#include<iostream>
using namespace std;

void intersection(int a[], int b[], int m, int n)
{
    for(int i=0;i<m;i++)
    {
        if(i>0 && a[i]==a[i-1])
            continue;
        
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}

int main()
{
    int a[]={3,5,10,10,10,15,15,20};
    int b[]={5,10,10,15,30};

    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);

    intersection(a,b,m,n);

    return 0;
}