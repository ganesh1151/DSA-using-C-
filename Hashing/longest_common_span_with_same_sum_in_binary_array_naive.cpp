//time complexity theta(n^2) and auxiliary space o(1)

#include<iostream>
using namespace std;

int longestCommonSum(int arr1[], int arr2[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++)
        {
            sum1+=arr1[j];
            sum2+=arr2[j];
            if(sum1==sum2)
                res=max(res,j-i+1);
        }
    }

    return res;
}

int main() 
{ 
	int arr1[] = {0, 1, 0, 1, 1, 1, 1}; 
	int arr2[] = {1, 1, 1, 1, 1, 0, 1}; 
	int n = sizeof(arr1)/sizeof(arr1[0]); 
	cout << longestCommonSum(arr1, arr2, n); 
	return 0; 
} 

