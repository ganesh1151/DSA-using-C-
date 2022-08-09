#include<iostream>
using namespace std;

void printDivisors(int n)
{
    for(int i=1;i<=n;i++)
        if(n%i==0)
            cout<<i<<" "; 
}

int main()
{
    int number=6;

    printDivisors(number);

    return 0;
}