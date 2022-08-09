#include<iostream>
#include<vector>
#include<queue>
using namespace std;


//Given an Unweighted Graph and a source point, the task is to find the shortest path between the source point and every other point in the graph.

// it is same as BFS traversal we are only doing some extra thing for maintaining the distance 

void BSF(vector<int> adj[],int v, int s, int dist[]){
    bool visited[v];
    for( int i=0;i<v;i++)
        visited[i]=false;
    
    queue<int> q;

    visited[s]=true;
    q.push(s);

    while (q.empty()==false)
    {
        int u=q.front();
        q.pop();

        for(int v: adj[u]){
            if(visited[v]==false){
                dist[v]=dist[u]+1;
                visited[v]=true;
                q.push(v);            
            }
        }
    }
    
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


int main(){
    int v=4;
    vector<int> adj[v];
    addEdge(adj,0,1); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,0,2); 
	addEdge(adj,1,3);

    int dist[v];
    for(int i=0;i<v;i++)
        dist[i]=INT16_MAX;
    
        
    dist[0]=0;
    BSF(adj,v,0,dist);

    for(int i=0;i<v;i++){
        cout<<dist[i]<<" ";
    }

    return 0;
}