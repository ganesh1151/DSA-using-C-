//Lookup Table

// C++ program to Count set 
// bits in an integer 

#include<iostream>
using namespace std;

int table[256];

//recursive funciton to count set bits
void initialize()
{
    //to initially generate the table  algorithmically:
    table[0]=0;
    for(int i=0;i<256;i++)
    {
        table[i]=(i & 1) + table[i/2];

    }
}

int countSetBits(int n)
{
	return table[n & 0xff] + 
    table[(n >> 8) & 0xff] + 
    table[(n >> 16) & 0xff] + 
    table[n >> 24]; 
}

/* Program to test function countSetBits */
int main() 
{ 
	    initialize();
		int n = 9; 
	cout << countSetBits(n); 
	return 0; 
} 
