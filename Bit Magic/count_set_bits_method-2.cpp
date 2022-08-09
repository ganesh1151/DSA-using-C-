//Brian and Kerningham Algorithm

// C++ program to Count set 
// bits in an integer 

#include<iostream>
using namespace std;

unsigned int countSetBits(int n)
{
    unsigned int count=0;
    while (n)
    {
        n &=(n-1);
        count++;
    }
    return count;    
}

int main()
{
    int i=9;
    cout<<countSetBits(i);

    return 0;
}