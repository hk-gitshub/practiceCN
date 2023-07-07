//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int i=0; 
        int j=0;
        vector <int>ans;
        while(j<n){
            int temp=0;
            for(int k=i;k<=j;k++){
                temp+=arr[k];
            }
            if(temp==s){
                ans[0]=i;
                ans[1]=j;
                return arr;
            }
            else if(temp<s){
                j++;
            }
            else{
                i++;
            }
        }
        arr[0]=-1;
        return arr;
    }
};

//{ Driver Code Starts.

int main()
 {
    // int t;
    // cin>>t;
    // while(t--)
    // {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	// return 0;
// }
// } Driver Code Ends