#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={10,20,5,7};
    sort(v.begin(),v.end());

    for(int x:v)
        cout<<x<<" ";
    
    sort(v.begin(),v.end(),greater<int>());

    cout<<endl;
    for(int x:v)
        cout<<x<<" ";

}