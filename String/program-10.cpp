#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str ="geeksforgeeks";
    cout<<str.length()<<" ";
    str=str + "xyz";
    cout<<str<<" ";
    cout<<str.substr(1,3)<<" ";
    cout<<str.find("eek")<<" ";
    return 0;
}