//kosarajus algorithm base on DFS
//in undirected graph it is very easy to find connected components using BSF/DFS

//1. order the vertices in decresign order of finish time is DFS
//2. Reverse all the edges
//3. Do DFS of the revesed graph in the order obtained  in step 1. for every vertex ,
        // print all reachable vertices as one strongly connected component.

// the only extra thing we are doing with DFS  here which 
    //is after all the adjacent are processed we pushing vertex into the stack.

#include <iostream>
#include<list>
#include<stack>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    
    void fillOrder(int v, bool visited[], stack<int> &s);

    void DFSUtil(int v, bool visited[]);

    public:
        Graph(int V);
        void addEdge(int v, int w);

        void printSCCs();

        Graph GetTranspose();

};

Graph::Graph(int V)
{
    this->V=V;
    adj=new list<int>[V];
}

void Graph ::DFSUtil(int v, bool visited[])
{
    visited[v]=true;
    cout<<v<<" ";

    list<int>::iterator i;//The list<int>::iterator type is the iterator type for the templated class list<int> .
                          // Iterators allow you to look at every element in a list one at a time. Fixing your code and 
                          //trying to explain, this is the correct syntax: for (i = integer_list. begin(); i != integer_list.
    for(i=adj[v].begin(); i!=adj[v].end();i++)
        if(!visited[*i])
            DFSUtil(*i, visited);
    
}

Graph Graph::GetTranspose()
{
    Graph g(V);
    for(int v=0; v<V ; v++)
    {
        list<int>::iterator i;
        for(i=adj[v].begin();i!=adj[v].end();i++)
        {
            g.adj[*i].push_back(v);
        }
    }
    return g;
}

