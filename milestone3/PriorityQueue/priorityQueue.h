#include<vector>
using namespace std;

class PriorityQueue{
    vector <int> pq;

    public:
    PriorityQueue(){

    }

    bool isEmpty(){
        return pq.size()==0;
    }

    int getSize(){
        return pq.size();
    }

    int getMin(){
        if(isEmpty()) return 0;
        return pq[0];
    }

    void insert(int data){
        pq.push_back(data);

        //In priory queue child index=(2i+1, 2i+2);
        // so parent index = (childIndex-1)/2
        int childIndex=pq.size()-1;

        while (childIndex>0){
            
            int parentIndex=(childIndex)-1/2;

            if(pq[parentIndex]>pq[childIndex]){
                int temp=pq[childIndex];
                pq[childIndex]=pq[parentIndex]; 
                pq[parentIndex]=temp;
            }else{
                    break;
                }
            childIndex=parentIndex;   
        }
        
        // pq.push_back(data);

        // int childIndex = pq.size() - 1; 

        // while (childIndex > 0) {
        //     int parentIndex = (childIndex - 1) / 2;

        //     if (pq[childIndex] < pq[parentIndex]) {
        //         int temp = pq[childIndex];
        //         pq[childIndex] = pq[parentIndex];
        //         pq[parentIndex] = temp;
        //     } else {
        //         break;
        //     }
        //     childIndex = parentIndex;
        // }
    }

     int removeMin() {
        int ans=pq[0];
        pq[0]=pq[pq.size()-1]; // swap last element to 1st element;
        pq.pop_back();

        int parentIndex=0;
        int childIndexL=(2*parentIndex)+1;
        int childIndexR=(2*parentIndex)+2;

        
        while(childIndexL<pq.size()){
                int minIndex=parentIndex;
                if(pq[minIndex]>pq[childIndexL]){
                    minIndex=childIndexL;
                }
                if(childIndexR<pq.size() && pq[minIndex]>pq[childIndexR]){
                    minIndex=childIndexR;
                }
                if(minIndex==parentIndex){
                    break;
                }
                int temp=pq[minIndex];
                pq[minIndex]=pq[parentIndex];
                pq[parentIndex]=temp;

                parentIndex=minIndex;
                childIndexL=(2*parentIndex)+1;
                childIndexR=(2*parentIndex)+2;
        }
        return ans;   
    }
};