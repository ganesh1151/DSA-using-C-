// It is a constant static member value with the highest 
// possible value for an element of type size_t.
// It actually means until the end of the string.
// It is used as the value for a length parameter in the string’s 
// member functions.
// As a return value, it is usually used to indicate no matches.


#include<bits/stdc++.h>
using namespace std;

bool areRotations(string s1,string s2)
{
    if(s1.length()!=s2.length()) return false;
    return ((s1+s2).find(s2)!=string::npos);
}

int main()
{
    string s1="ABCD";
    string s2="CDAB";

    if(areRotations(s1,s2)){
        cout<<"String are rotations of each other"<<endl;
    }
    else{
        cout<<"String are not rotation of each other"<<endl;
    }

    return 0;
}