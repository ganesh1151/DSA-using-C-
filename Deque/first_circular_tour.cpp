// Consider an arrangement where n petrol pumps are arranged in a circular manner. 
// We need to find the first petrol pump from where we can visit all petrol pumps and 
// come back to the petrol pump without ever going out of the petrol.

#include<iostream>
using namespace std;

int forPetrolPump(int petrol[], int diff[], int n)
{
    for(int start=0; start<n;start++)
    {
        int curr_petrol=0;
        int end=start;
        while(true)
        {
            curr_petrol+=(petrol[end]-diff[end]);
            if(curr_petrol<0)
                break;
            end=(end+1)%n;
            if(end==start)
                return (start+1);
        }
    }

    return -1;
}

int main()
{
    int petrol[4]={4,8,7,4};
    int diff[4]={6,5,3,5};
    int n=4;
    
    cout<<forPetrolPump(petrol,diff,n);

    return 0;
}