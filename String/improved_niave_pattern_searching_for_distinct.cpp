// Given a pattern with distinct characters and a text, 
// we need to print all occurrences of the pattern in the text. 
// This video talks about improved Naive pattern searching with Theta(n) time complexity
#include<bits/stdc++.h>
using namespace std;

void patSearching(string &txt, string &pat)
{
    int m=pat.length();
    int n=txt.length();

    for(int i=0;i<=(n-m);)
    {
        int j;
        for(j=0;j<m;j++)
            if(pat[j]!=txt[i+j])
                break;
        
        if(j==m)
            cout<<i<<" ";
        if(j==0) 
        {
            i++;
        }
        else
        {
            i=(i+j);
        }
    }
}

int main() 
{ 
    string txt = "ABCABCD";string pat="ABCD";
    cout<<"All index numbers where pattern found:"<<" ";
    patSearching(txt,pat);
    
    return 0; 
} 