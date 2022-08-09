#include<iostream>
using namespace std;

void printDivisors(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";

            if(i!=(n/i))       //this condition is used for if both multile divisor are same then print only once time
                cout<<(n/i)<<" ";
        }
    }
}

int main()
{
    int number=125;
    printDivisors(number);

    return 0;
}