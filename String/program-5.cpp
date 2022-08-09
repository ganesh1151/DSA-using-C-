#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[]="bcd";
    char s2[]="abc";
    int res=strcmp(s1,s2);
    // cout<<res;
    if(res>0)
        cout<<"Greater";
    else if(res==0)
        cout<<"Same";
    else
        cout<<"Smaller";
}