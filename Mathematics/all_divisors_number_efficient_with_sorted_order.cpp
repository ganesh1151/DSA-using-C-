#include<iostream>
using namespace std;

void printDivisors(int n)
{
    int i=1;
    for(i=1;i*i<n;i++)
        if(n%i==0)
            cout<<i<<" ";

    for( ;i>=1;i--)
        if(n%i==0)
            cout<<(n/i)<<" ";

}

int main()
{
    int number=15;
    printDivisors(number);

    return 0;
}