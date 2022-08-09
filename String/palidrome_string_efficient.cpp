#include<bits/stdc++.h>
using namespace std;
//it require o(n) time and o(1) extra space
bool isPal(string str)
{
    int begin=0;
    int end=str.length()-1;
    while(begin<end)
    {
        if(str[begin]!=str[end])
            return false;
        begin++;
        end--;
    }

    return true;
}

int main()
{
    string str="aba";
    cout<<isPal(str);

    return 0;
}