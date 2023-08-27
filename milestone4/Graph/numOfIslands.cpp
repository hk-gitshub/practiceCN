#include <iostream>
using namespace std;

void islandsCounts(int **arr, int vertices, int sv, bool *visited){
    visited[sv]=true;

    for(int i=0; i<vertices; i++){
        if(arr[sv][i]==1 && !visited[i])
            islandsCounts(arr, vertices, i, visited);
    }
}

int islands(int **arr, int vertices){
    bool *visited=new bool[vertices];
    for(int i=0; i<vertices; i++){
        visited[i]=false;
    }

    int count=0;
    for(int i=0; i<vertices; i++){
        if(!visited[i]){
            islandsCounts(arr, vertices, i, visited);
            count++;
        }
    }
    return count;
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

    cout<<islands(arr, vertices)<<endl;

    // delete []visited;
    for(int i=0; i<vertices; i++){
        delete arr[i];
    }
}