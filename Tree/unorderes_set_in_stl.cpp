#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set <int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for( int x: s){
        cout<<x<<" ";
    }

    cout<<endl;
    for(auto it=s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    s.clear();
    cout<<s.size()<<endl;

    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    cout<<s.size()<<endl;

    if(s.find(15)==s.end())
}