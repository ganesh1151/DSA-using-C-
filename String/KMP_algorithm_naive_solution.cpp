// KMP Agorithm (Part 1 : Constructing LPS Array)
// Two methods of LPS (Longest Proper Prefx Suffix) Array are
// discussed. One method has time complexity O(n^3) and other method is O(n).

#include <bits/stdc++.h>
using namespace std;

int longPropPreSuff(string str, int n)
{
    for(int len=n-1;len>0;len--)
    {
        bool flag=true;
        for(int i=0;i<len;i++)
            if(str[i]!=str[n-len+i])
                flag=false;

        if(flag==true)
            return len;
    }
    return 0;
}

void fillLPS(string str, int *lps)
{
    for(int i=0;i<str.length();i++)
        lps[i]=longPropPreSuff(str,i+1);
    
}

int main()
{
    string txt="abacabad";
    int lps[txt.length()];
    fillLPS(txt,lps);
    for(int i=0;i<txt.length();i++)
        cout<<lps[i]<<" ";
    
    return 0;
}
