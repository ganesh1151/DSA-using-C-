// C++ program to Count set 
// bits in an integer 

#include<iostream>
using namespace std;
unsigned int countSetBits(unsigned int n)
{
    unsigned int count=0;
    while (n!=0)
    {
        if(n%2!=0)
            count++;
        n=n/2;
    }

    return count;
}

int main()
{
    int i=9;
    cout<<countSetBits(i);
    return 0;
}