#include <bits/stdc++.h>
using namespace std;

vector<int> getPath(int **arr, int vertices, bool *visited, int v1, int v2){
    if(v1 == v2){
        return {v2};
    }

    visited[v1]=true;
    unordered_map<int,int> puted;
    queue<int> pendingVertex;
    pendingVertex.push(v1);

    int v;
    while(!pendingVertex.empty()){

        int front=pendingVertex.front();
        pendingVertex.pop();

        if(front == v2){
            v=v2;
            vector<int> output;
            output.push_back(v);
            while(v!=v1){
                int temp=puted[v];
                output.push_back(temp);
                v=temp;
            }
            return output;
        }
        
        for(int i=0; i<vertices; i++){
            if(arr[front][i] == 1 && !visited[i]){
                pendingVertex.push(i);
                visited[i]=true;
                puted[i]=front;
            }
        }
    }        
    return {};
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

    bool *visited=new bool[vertices];
    for(int i=0; i<vertices; i++){
        visited[i]=false;
    }

    for(int i=0; i<edges; i++){
        int sp, ep;
        cin>>sp>>ep;
        arr[sp][ep]=1;
        arr[ep][sp]=1;
    }

    int v1, v2;
    cin>>v1>>v2;
    vector<int> output=getPath(arr, vertices, visited, v1, v2);

    for(int i=0; i<output.size(); i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;

    delete []visited;
    for (int i = 0; i < vertices; i++) {
        delete arr[i];
    }
}