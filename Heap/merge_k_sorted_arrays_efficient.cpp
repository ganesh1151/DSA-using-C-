#include<bits/stdc++.h>
using namespace std;

struct Triplet{
    int val, aPos, vPos;
    Triplet(int v, int ap, int vp){
        val=v;
        aPos=ap;
        vPos=vp;
    }
};

struct MyComp
{
    bool operator()(Triplet & t1, Triplet &t2)
    {
        return t1.val>t2.val;
    }
};
