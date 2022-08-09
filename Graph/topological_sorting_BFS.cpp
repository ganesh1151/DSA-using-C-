//Topological Sorting (Kahn's BFS Based Algortihm)
//topological sorting depend on dependencies
//first we print that vetex which does not have any indegree 
//after printing 0 indegree vertex , minus its adjacent vertex by 1 degree
//if vertex does not have any adjacent so we will simply print it
//continue this process until all vertex becomes 0 and printing 


// sarvaht pahile indgree array create karaycha tyachi size vertex ithki pahije , loop use karun find degree of every vertx 
// and store it into hte indegree array 
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void topologicalSort(vector<int> adj[],int v)
{
    vector<int> in_degree(v,0);  //create vecotr indegreee with size v and with all value as 0
    for(int u=0;u<v;u++){
        for(int x: adj[u])
            in_degree[x]++;
    }

    queue<int>q;
    for (int i=0;i<v;i++){
        if(in_degree[i]==0)
            q.push(i);

    }

    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";

        for(int x :adj[u]){
            if(--in_degree[x]==0)         // for substracting -1
                q.push(x);
        }
    }
    
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 2); 
    addEdge(adj,0, 3); 
    addEdge(adj,1, 3); 
    addEdge(adj,1, 4); 
    addEdge(adj,2, 3);  
  
    cout << "Following is a Topological Sort of\n"; 
    topologicalSort(adj,V);

	return 0; 
} 
