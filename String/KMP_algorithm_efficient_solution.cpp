// KMP Agorithm (Part 1 : Constructing LPS Array)
// Two methods of LPS (Longest Proper Prefx Suffix) Array are
// discussed. One method has time complexity O(n^3) and other method is O(n).

#include<bits/stdc++.h>
using namespace std;

void fillLPS(string str,int *lps)
{
    int n=str.length(), len=0;
    lps[0]=0;
    int i=1;
    while (i<n)
    {
        if(str[i]==str[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len==0)
            {
                lps[i]=0;
                i++;
            }

            else
            {
                len=lps[len-1];
            }
        }
    }
    
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