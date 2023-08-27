#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> getPath(int **arr, int vertices, bool *visited, int v1, int v2){
    if(v1==v2){
        vector<int> output;
        output.push_back(v2);
        return output;
    }

    visited[v1]=true;

    vector<int> op;
    for(int i=0; i<vertices; i++){

        if(arr[v1][i] == 1 && !visited[i]){
            op=getPath(arr, vertices, visited, i, v2);
            if(op.size()!=0){
             op.push_back(v1);
             return op;
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
    for(int i=0; i<vertices; i++){
        delete arr[i];
    }
}