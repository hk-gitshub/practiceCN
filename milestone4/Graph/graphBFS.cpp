#include <iostream>
#include <queue>
using namespace std;

void printBFS(int **arr, int vertices, int sv, bool *visited){
    // cout<<sv<<endl;
    // visited[sv]=true;

    // if(arr.size() <= 1){
    //     cout<<0;
    //     return;
    // }

    queue<int> *pendingVertices;
    pendingVertices->push(sv);
    cout<<sv<<" ";
    visited[sv]=true;

    while(pendingVertices->size() != 0){
        
        int top=pendingVertices->front();
        pendingVertices->pop();
        cout<<top<<" ";
        visited[top] = true;
        for(int i=0; i<vertices; i++){
            if(arr[top][i] == 1 && !visited[i]){
                pendingVertices->push(i);
            }
        }
    }
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

    for(int i=0; i<edges; i++){
        int sp, ep;
        cin>>sp>>ep;
        arr[sp][ep]=1;
        arr[ep][sp]=1;
    }

    bool *visited=new bool[vertices];
    for(int i=0; i<vertices; i++){
        visited[i]=false;
    }

    printBFS(arr, vertices, 0, visited);
}