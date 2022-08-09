// Consider an arrangement where n petrol pumps are arranged in a circular manner. 
// We need to find the first petrol pump from where we can visit all petrol pumps and 
// come back to the petrol pump without ever going out of the petrol.

#include<iostream>
using namespace std;

int forPetrolPump(int petrol[], int diff[], int n)
{   
    int start=0;
    int curr_pet=0;
    int prev_pet=0;
    for(int i=0; i<n;i++)
    {
    
        curr_pet+=(petrol[i]-diff[i]);
        if(curr_pet<0)
        {
            start=i+1;
            prev_pet+=curr_pet;
            curr_pet=0;
        }
    }
    return ((curr_pet+prev_pet)>=0)?(start+1):-1;

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