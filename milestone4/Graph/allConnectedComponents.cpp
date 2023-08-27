#include <bits/stdc++.h>
using namespace std;

void allConnectedComponentsHelper(int **arr, int vertices, int sv, bool *visited, vector<int> &smallOP){
    smallOP.push_back(sv);
    visited[sv]=true;

    for(int i=0; i<vertices; i++){
        if(arr[sv][i]==1 && !visited[i]){
            // smallOP.push_back(i);
            allConnectedComponentsHelper(arr, vertices, i, visited, smallOP);
        }
    }
}

vector<vector<int>> allConnectedComponents(int **arr, int vertices, int sv){
    bool *visited=new bool [vertices];
    for(int i=0; i<vertices; i++){
        visited[i]=false;
    }

    vector<vector<int>> output;
    for(int i=0; i<vertices; i++){
        if(!visited[i]){
            vector<int> smallOP;
            allConnectedComponentsHelper(arr, vertices, i, visited, smallOP);
            sort(smallOP.begin(), smallOP.end());
            output.push_back(smallOP);
        }
    }
    return output;
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

    vector<vector<int>> output;
    output=allConnectedComponents(arr, vertices, 0);
    for (int i = 0; i < output.size(); i++) {
        for(int j=0; j<output[i].size(); j++){
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }

    // delete []visited;
    for(int i=0; i<vertices; i++){
        delete arr[i];
    }
}