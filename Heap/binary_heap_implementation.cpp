#include<iostream>
using namespace std;

class MinHeap{
    int *arr;
    int size;
    int capicity;

    public:
        MinHeap(int c){
            size=0;
            capicity=c;
            arr=new int[c];
        }

        int left(int i) { return (2*i + 1); }
        int right(int i) { return (2*i + 2); }
        int parent(int i) { return (i-1)/2; }
};

int main()
{
    MinHeap h(11);
    return 0;
}