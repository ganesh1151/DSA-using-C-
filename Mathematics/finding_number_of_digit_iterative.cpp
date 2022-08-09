#include<iostream>
using namespace std;

int main()
{
    int n=134;
    int count=0;
    while (n!=0)
    {
        n=n/10;
        count++;
    }

    cout<<"Number of digit is : "<<count;
    
    return 0;
}
