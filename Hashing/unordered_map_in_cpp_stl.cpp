// The auto keyword specifies that the type of the variable that is
// being declared will be automatically deducted from its initializer. 
// In case of functions, if their return type is auto then that will be
//  evaluated by return type expression at runtime
#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map <string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"courses",15});

    if(m.find("ide")!=m.end())
        cout<<"Found";
    else
        cout<<"Not Found";

    cout<<endl;

    for(auto it=m.begin();it!=m.end();it++)
        cout<<(it->first)<<" "<<(it->second)<<endl;

    if(m.count("ide")>0)
        cout<<"Found";
    else
        cout<<"Not Found";

    cout<<endl;

    cout<<m.size()<<endl;
    m.erase("ide");
    m.erase(m.begin());
    cout<<m.size()<<endl;
    m.erase(m.begin(),m.end());

    return 0;
}