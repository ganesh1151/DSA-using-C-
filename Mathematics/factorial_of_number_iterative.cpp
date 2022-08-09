#include <iostream>
using namespace std;

int fact(int n)
{
    int res=1;
    for(int i=2;i<=n;i++)
    {
        res*=i;
    }

    return res;
}

int main()
{
    int number=5;
    cout<<fact(number);

    return 0;
}