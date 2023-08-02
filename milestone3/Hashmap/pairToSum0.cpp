#include<iostream>
#include <unordered_map>
using namespace std;

int pairSum(int *arr, int n) {
	unordered_map<int, int> mp;

	// for(int i=0; i<n; i++){
	// 	if(mp.painSumCount(arr[i])>0){
	// 		mp[arr[i]]++;
	// 	}else mp[arr[i]]=1;
	// }

	// int pairSumpainSumCount=0;
	// for(int i=0; i<n; i++){
	// 	int minuspainSumCount=arr[i]*(-1);
	// 	if(mp[arr[i]]>0 && mp[minuspainSumCount]>0){
	// 		if(arr[i]==0){
	// 			// formula for num of edges in complete graph
	// 			//n(n-1)/2
	// 			pairSumpainSumCount+=(mp[arr[i]]*(mp[arr[i]]-1))/2;		
	// 			mp.erase(arr[i]);
	// 		}else{
	// 			pairSumpainSumCount+=mp[arr[i]]*mp[minuspainSumCount];
	// 			mp[arr[i]]=0;
	// 			mp[minuspainSumCount]=0;
	// 		}
	// 	}
	// }

	int pairSumCount=0;
	for(int i=0; i<n ; i++){
          if (mp.count(arr[i]) == 0) {
            mp[arr[i]] = 1;
          } else mp[arr[i]] += 1;
        if (mp.count(-arr[i]))
        {
            pairSumCount = pairSumCount + mp[-arr[i]];
            if (arr[i] == 0)
                pairSumCount--;
        }
		
	}

	return pairSumCount;
}

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}