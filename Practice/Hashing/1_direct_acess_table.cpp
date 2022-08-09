#include<iostream>
using namespace std;

struct DAT
{
	int table[1000]={0};
	
	void insert(int i){
		table[i]=1;
	}
	
	void del(int i)
	{
		table[i]=0;
	}
	
	int search(int i)
	{
		return table[i];
	}
	
};

int main()
{
	DAT dat;
	dat.insert(10);
	dat.insert(20);
	dat.insert(50);
	
	cout<<dat.search(50)<<"\n";
	cout<<dat.search(10)<<"\n";
	
	dat.del(50);
	cout<<dat.search(50);
	

	return 0;
	
	
}
