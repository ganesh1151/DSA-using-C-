#include<bits/stdc++.h>
using namespace std;
#define V 4

///dijkstras algorithm does not work for negative weight edges 
vector<int> dijkstra(int graph[V][V],int src)   //vector kiva array return karel tyach data type inst asel 
{
    vector<int> dist(V,INT16_MAX);
    dist[src]=0;
    vector<bool> fin(V,false);

    for(int count=0;count<V-1;count++)
    {
        int u=-1;
        for(int i=0;i<V;i++)
            if(!fin[i] && (u==-1 || dist[i]<dist[u]))    //finding the minimum disntace element 
                u=i;
        
        fin[u]=true;

        for (int v=0;v<V;v++)
            if(graph[u][v]!=0 && fin[v]==false)
                dist[v]=min(dist[v],dist[u]+graph[u][v]);  //important ->updating the adjacent distance 
    }
    return dist;
}

int main() 
{ 
	int graph[V][V] = { { 0, 50, 100, 0}, 
						{ 50, 0, 30, 200 }, 
						{ 100, 30, 0, 20 }, 
						{ 0, 200, 20, 0 },}; 

	for(int x: dijkstra(graph,0)){
	    cout<<x<<" ";
	} 

	return 0; 
} 
