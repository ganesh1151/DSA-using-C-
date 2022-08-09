#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else 
         return n*fact(n-1);
}

int main()
{
    int number=5;

    cout<<fact(number);

    return 0;
}