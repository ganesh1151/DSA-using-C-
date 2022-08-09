//Given a string of parenthesis ({, }, (, ), [ and ]), 
//we need to check if this string is balanced or not.

//time complexity O(n) and auxiliary space O(n)
#include<bits/stdc++.h>
using namespace std;

bool matching(char a, char b)
{
    return ((a=='(' && b==')') || (a=='[' && b==']')  || (a=='{' && b=='}'));
}
bool isBlanced(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{' || str[i]=='(' || str[i]=='[')
        {
            s.push(str[i]);
        }

        else{
            if(s.empty()==true)
                return false;
            else if(matching(s.top(),str[i])==false)
                return false;
            else
                s.pop();
            
        } 
    }
    return (s.empty()==true);
}

int main()
{
    string str="{()}[]";
    if(isBlanced(str))
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
    
    return 0;
}