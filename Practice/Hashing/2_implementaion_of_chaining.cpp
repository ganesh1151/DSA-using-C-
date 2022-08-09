//implemention of chaining 

#include<bits/stdc++.h>
#include<list>
using namespace std;

struct MyHash{
	int bucket;
	list<int>*table;
	MyHash(int b){
		bucket=b;
		table=new list<int>[bucket];
	}
		
		void insert(int k){
			int i=k%bucket;
			table[i].push_back(k);
		}
		
		int search(int k)
		{
			int i=k%bucket;
			for(auto x:table[i]){
				if(x==k)
				{
					return true;
				}
			}
			return false;
			
		}
		
		void remove(int k)
		{
			int i=k%bucket;
			table[i].remove(k);
		}
	
	
};

int main()
{
	MyHash mh(10);
	mh.insert(20);
	mh.insert(30);
	cout<<mh.search;
	
	return 0;
}
