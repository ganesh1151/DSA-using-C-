//a funciotn is recursive function is called tail recrusive function 
//when parent function has nothing to more do when the child funciton is finish
// in simple word when last thing in function is recursive call and nothing happens after that

#include<iostream>
using namespace std;

void fun(int n, int k)
{
    if(n==0)
        return;
    cout<<k<<" ";
    fun(n-1,k+1);
}

int main()
{
    fun(5,1);

    return 0;
}