#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[]="abc";
    char s2[]="bcd";

    if(s1==s2)
        cout<<"Same";
    else if(s1<s2)
        cout<<"Smaller";
    else
        cout<<"Greater";
        
}