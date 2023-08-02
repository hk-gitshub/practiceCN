#include<iostream>
#include <unordered_map>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m) {
//   unordered_map<int, int> frequency;
//   for(int i=n-1; i>=0; i--){              // iterate loop in reverse order to setisfy the condition
//         if(frequency.count(arr1[i])>0){  // if 2 has same maxfreq
//             frequency[arr1[i]]++; 
//         } else {
//           frequency[arr1[i]] = 1;
//         }
        
//     }

//   for (int i = 0; i < n; i++) {
//     //   if(haveSeen.count(arr2[i])>0){
//     //       haveSeen[arr2[i]]--;
//     //       cout << arr2[i] << endl;
//     //   } 
//     cout<<arr1[i]<<":"<<frequency.count(arr1[i])<<endl;
        unordered_map<int, int> p;
    for(int i=0; i<n; i++){
        if(p.count(arr1[i])>0){
            p[arr1[i]]++;       
        }else{
            p[arr1[i]]=1;
        }
    }
    for(int i=0; i<n; i++){
            cout <<arr1[i]<<":"<< p[arr1[i]]<<endl;
    }
  }

int main(){
     int a[]={1,2,2,1,3,1,2,2};
     int b[]={1,2,2,1,3};
     printIntersection(a, b, 8, 5);
}