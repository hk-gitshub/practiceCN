#include <iostream>
using namespace std;

void hasPathDFS(int **arr, int n, bool * visited, int v1, int v2){
      visited[v1]=true;
    for(int i=0; i<n; i++){
        if(arr[v1][i]==1 && !visited[i]){
            hasPathDFS(arr, n, visited, i, v2);
        }
    }
    
}

bool hasPath(int **arr, int n, int v1, int v2){
    //using DFS
    bool *visited=new bool[n];
    for(int i=0; i<n; i++){
        visited[i]=false;
    }

    hasPathDFS(arr, n, visited, v1, v2);
    if(visited[v2]) return true;
    else return false;
}

int main() {
    int vertices, edges;
    cin>>vertices;
    cin>>edges;
    int **arr=new int*[vertices];
    for(int i=0; i<vertices; i++){
        arr[i]=new int[vertices];
        for(int j=0; j<vertices; j++){
            arr[i][j]=0;
        }
    }

    int v1, v2;
    cin>>v1>>v2;
    for(int i=0; i<edges; i++){
        int sp, ep;
        cin>>sp>>ep;
        arr[sp][ep]=1;
        arr[ep][sp]=1;
    }

    if(hasPath(arr, vertices, v1, v2)){
        cout<<"true";
    }else cout<<"false";

    for(int i=0; i<vertices; i++){
        delete arr[i];
    }
}