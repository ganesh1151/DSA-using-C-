#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cout<<"Enter Your name ";
    getline(cin,str,'a');
    cout<<"\nYour name is "<<str;
    return 0;
}