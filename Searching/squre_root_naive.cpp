#include<iostream>
using namespace std;

int sqRootFloor(int x)
{
    int i=1;
    while (i*i<=x)
         i++;
    
    return i-1;
}

int main()
{
    cout<<sqRootFloor(8);

    return 0;
}