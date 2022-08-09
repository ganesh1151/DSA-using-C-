#include<iostream>
using namespace std;

struct DAT
{
    int table[1000]={0};

    void insert(int i){
        table[i]=1;
    
    }

    void del(int i){
        table[i]=0;
    }

    int search(int i){
        return table[i];
    }
    
};


int main(){
    DAT dat;
    dat.insert(10);
    dat.insert(30);
    dat.insert(119);
    cout<<dat.search(10)<<"\n";
    cout<<dat.search(30)<<"\n";
    dat.del(119);
    cout<<dat.search(119);

    return 0;
}




