#include <bits/stdc++.h> 
using namespace std; 
#define V 4

//#define is a useful C++ component that allows the programmer to give a name to a constant value before the program is compiled. ... 
//In that case the text would be replaced by the #defined number

//here we need to maintain two set one is which is in MST and other is which is Not in MST
//and every step we find minimum weighted edges connect to that edges
//spanning should connecte all the vertices 

int primMST(int graph[V][V]) 
{ 

	int key[V];
    int res=0; 
	fill(key,key+V,INT_MAX); //The ‘fill’ function assigns the value ‘val’ to all the elements in the range [begin, end),
                                // where ‘begin’ is the initial position and ‘end’ is the last position.
	bool mSet[V]; 
    key[0]=0;

	for (int count = 0; count < V ; count++) 
	{ 
		int u = -1; 

		for(int i=0;i<V;i++)
		    if(!mSet[i]&&(u==-1||key[i]<key[u]))     //finding the minimum disntace element
		        u=i;
		mSet[u] = true; 
		res+=key[u];

		
		for (int v = 0; v < V; v++) 

			if (graph[u][v]!=0 && mSet[v] == false) 
				key[v] = min(key[v],graph[u][v]);       //important ->updating the adjacent distance
	} 
    return res;
} 

int main() 
{ 
	int graph[V][V] = { { 0, 5, 8, 0}, 
						{ 5, 0, 10, 15 }, 
						{ 8, 10, 0, 20 }, 
						{ 0, 15, 20, 0 },}; 

	cout<<primMST(graph); 

	return 0; 
} 
