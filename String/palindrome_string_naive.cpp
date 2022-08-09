#include<bits/stdc++.h>
using namespace std;
//it require theta(n) time and theta (n) auxiliary space
bool isPal(string str)
{
    string rev=str;
    reverse(rev.begin(),rev.end());
    return rev==str;
}

int main()
{
    string str="aba";
    cout<<isPal(str);

    return 0;
}