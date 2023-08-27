#include<bits/stdc++.h>
using namespace std;

//print the grap
//this technique called DFS 
//Depth First Search
void print(int** edges, int v, int sv, bool* visited){
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0; i<v; i++){
        if(!visited[i] && edges[sv][i] == 1){
            print(edges, v, i, visited);
        }
    }
}


//made graph using adjency matrix
int main(){
    int vertices, edge;
    cout<<"enter the vertices and edges: "<<endl;
    cin>>vertices>>edge;

    //create 2d dynamic array size of vertices
    int **edges=new int*[vertices];
    for(int i=0; i<vertices; i++){
        edges[i]=new int[vertices];
        for(int j=0; j<vertices; j++){
            edges[i][j]=0;
        }
    }

    //connect vertices
    for(int i=0; i<edge; i++){
        int sVertices, eVertices;
        cin>>sVertices>>eVertices;

        edges[sVertices][eVertices]=1;
        edges[eVertices][sVertices]=1;
    }

    //made array for visited vertices so we can ignore it
    bool *visited=new bool[vertices];
    for(int i=0; i<vertices; i++){
        visited[i]=false;
    }

    //print the graph
    print(edges, vertices, 0, visited);

}