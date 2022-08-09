//the Detection of a Cycle in an directed Graph using Kahn's algorithm.
//here we only do extra thing which is maintain the creating count and chekck it with number of vertex

//everythign is same as kans algorithm the extra thing is to count if count is not equal to vertx no then it is contain cycle 
//cyclic graph cannot have vetex degree is 0 

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void topologicalSort(vector<int> adj[],int v){
    vector<int> in_degree(v,0);          //create vecotr indegreee with with size v and with all value as 0

    for (int u=0;u<v;u++){
        for(int x:adj[u])
            in_degree[x]++;
    }

    queue<int> q;
    for(int i=0;i<v;i++)
        if(in_degree[i]==0)
            q.push(i);
    
    int count=0;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int x:adj[u])
            if(--in_degree[x]==0)
                q.push(x);
        count++;
    }

    if(count!=v)
        cout<<"There Exists a Cycle in the Graph\n";
    else
        cout<<"There Exists a No cycle in the graph\n";
    
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 1); 
    addEdge(adj,4, 1); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 1);  
  
    topologicalSort(adj,V);

	return 0; 
} 
