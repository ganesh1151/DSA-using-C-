#include<iostream>
using namespace std;

struct Deque
{
    int size,cap;
    int *arr;
    Deque(int c){
        cap=c;
        size=0;
        arr=new int[cap];
    }
    
    bool isFull(){return(size==cap);}

    bool isEmpty(){return (size==0);}

    void insertRear(int x)
    {
        if(isFull()) return;
        arr[size]==x;
        size++;
    }

    void deleteRear()
    {
        if(isEmpty()) return;
        size--;
    }

    int getRear()
    {
        if(isEmpty()) return -1;
        else return (size-1);
    }
};

int main()
{
    Deque a(10);
    a.insertRear(5);
    cout<<"\n"<<a.getRear();
    a.insertRear(20);
    a.insertRear(30);
    cout<<"\n"<<a.getRear();
    a.insertRear(40);
    a.insertRear(60);
    cout<<"\n"<<a.getRear();
    a.deleteRear();
    cout<<"\n"<<a.getRear();


    return 0;
}
