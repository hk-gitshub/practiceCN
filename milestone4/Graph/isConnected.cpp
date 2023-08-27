#include <iostream>
using namespace std;

//by using DFS 
void isConnectedHelper(int **arr, int vertices, int sv, bool *visited){
    visited[sv]=true;

    for(int i=0; i<vertices; i++){
        if(arr[sv][i]==1 && !visited[i]){
            isConnectedHelper(arr, vertices, i, visited);
        }
    }
}

bool isConnected(int **arr, int vertices, int sv){
    bool *visited=new bool[vertices];
    for(int i=0; i<vertices; i++){
        visited[i]=false;
    }

    isConnectedHelper(arr, vertices, sv, visited);
    for(int i=0; i<vertices; i++){
        if(visited[i]==false){
            return false;
        }
    }
    return true;
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

    if (isConnected(arr, vertices, 0)) {
        cout << "true" << endl;
    }else{
        cout<<"false"<<endl;
    }

    // delete []visited;
    for(int i=0; i<vertices; i++){
        delete arr[i];
    }
}