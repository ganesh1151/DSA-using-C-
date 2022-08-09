#include<iostream>
#include<vector>
using namespace std;

//in this directed graph there is only cycle when there is edge (BACK EDGE) from decendant to one of the ancestor
//for that purpose we maintain boolean recursion stack array 

bool DFSRec(vector<int> adj[],int s,bool visited[], bool recSt[]){
    visited[s]=true;
    recSt[s]=true;

    for(int u: adj[s]){
        if(visited[u]==false && DFSRec(adj,u,visited,recSt)==true)
            return true;
        else if(recSt[u]==true)
            return true;
    }
    recSt[s]=false;   //before finishing the recursive call and after finishing loop it make recusrisuve call /recusive stack array as false ,
                            //  but marks as visited
    return false;
}


bool DFS(vector<int> adj[],int v){
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    bool recSt[v];
    for(int i=0;i<v;i++)
        recSt[i]=false;
    
    for (int i = 0; i < v; i++)
    {
        if(visited[i]==false)
            if(DFSRec(adj,i, visited ,recSt)==true)
                return true;
    }
    return false;    
}


void addEdge(vector<int> adj[], int u,int v){
    adj[u].push_back(v);
}


int main(){
    int v=6;
    vector<int> adj[v];
    addEdge(adj,0,1); 
	addEdge(adj,2,1); 
	addEdge(adj,2,3); 
	addEdge(adj,3,4); 
	addEdge(adj,4,5);
	addEdge(adj,5,3);

    if(DFS(adj,v))
        cout<<"Cycle Found";
    else   
        cout<<"No Cycle Found";

    return 0;
}