#include<iostream>
using namespace std;

int main()
{
    string str="geeksforgeeks";
    int count[26]={0};

    for(int i=0;i<str.length();i++)
    {
        // cout<<str[i]-'a'<<" ";
        count[str[i]-'a']++;
    
    }
    for(int i=0;i<26;i++)
        if(count[i]>0)
            cout<<char(i+'a')<<" "<<count[i]<<endl;
}