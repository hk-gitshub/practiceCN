#include <bits/stdc++.h>
using namespace std;

class Edges{
    public:

    int source;
    int destination;
    int weight;
    
};
    // check weight
    bool checkWeight(Edges const &a, Edges const &b){
        return a.weight<b.weight;
    }

    //find parent of current vertex
    int findParent(int v, int *input){
        if(input[v] == v) return v;

        return findParent(input[v], input);
    }

    //kruskal's algo
    void kruskal(Edges *input, int v, int e){
        
        //output array of edge class 
        //that graph MST must be store and print
        Edges *output=new Edges[v-1];

        //sort the input array order by weight of edge 
        sort(input, input + e, checkWeight);

        //parent array of vertices
        int parentV[v];
        for(int i=0; i<v; i++){
            parentV[i]=i;
        }

        //current edge in output array
        int count=0; 
        //current edge in input array
        //its possible we can skip some edges becuase of cycle detection
        int i=0;
        while(count != v-1){
            Edges currentEdge=input[i];
            int sourceP=findParent(currentEdge.source, parentV);
            int destinationP=findParent(currentEdge.destination, parentV);

            if(sourceP != destinationP){
                output[count]=currentEdge;
                count++;
                parentV[sourceP]=destinationP;
            }
            i++;
        }

        for(int i=0; i<v-1; i++){
            if (output[i].source < output[i].destination) {
                cout << output[i].source << " " << output[i].destination << " "
                     << output[i].weight << endl;
            }else{
                cout << output[i].destination << " " << output[i].source << " "
                     << output[i].weight << endl;
            }

        }
    }

int main() {
    int vertex;
    int edge;
    cin>>vertex>>edge;
     //input array of edges class
    Edges *input=new Edges[edge];
     for(int i=0; i<edge; i++){
            int s, d, w;
            cin>>s>>d>>w;
            input[i].source=s;
            input[i].destination=d;
            input[i].weight=w;
        }
    kruskal(input, vertex, edge);
}