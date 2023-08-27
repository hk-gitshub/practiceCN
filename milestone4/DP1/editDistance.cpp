#include <bits/stdc++.h>
using namespace std;

//using DP approach
int editDistanceDP(string s1, string s2){
    int m=s1.size();
	int n=s2.size();

    int **output=new int* [m+1];
	for(int i=0; i<=m; i++){
		output[i]=new int[n+1];
    }
    //fill 1st raw 
    for(int j=0; j<=n; j++){
        output[0][j]=j;
    }

    //fill 1st col
    for(int i=1; i<=m; i++){
        output[i][0]=i;
    }

    //remaining part
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            //match 1st char 0f str
            if(s1[m-i] == s2[n-j]){
                output[i][j]=output[i-1][j-1];
            }else{
                int a=output[i-1][j]+1;
                int b=output[i][j-1]+1;
                int c=output[i-1][j-1]+1;
                output[i][j]=min(a,min(b,c));
            }
        }
    }
    return output[m][n];
}

//using memoaization approach
int editDistanceHelper(string s1, string s2, int **output){
	int m=s1.size();
	int n=s2.size();
	//base case
	if(m==0 || n==0) return max(m,n);

	//check 
	if(output[m][n] != -1){
		return output[m][n];
	}

	//recursive calls
    int ans;
	if(s1[0] == s2[0]){
		ans=editDistanceHelper(s1.substr(1), s2.substr(1), output);
	}else{
		int a=editDistanceHelper(s1.substr(1), s2, output) + 1;
		int b=editDistanceHelper(s1, s2.substr(1), output) + 1;
		int c=editDistanceHelper(s1.substr(1), s2.substr(1), output) + 1;

		ans=min(a,min(b,c));
	}
    output[m][n]=ans;
		return ans;

}

int editDistanceMemo(string s1, string s2)
{
	int m=s1.size();
	int n=s2.size();

	int **output=new int* [m+1];
	for(int i=0; i<=m; i++){
		output[i]=new int[n+1];
		for(int j=0; j<=n; j++){
			output[i][j]=-1;
		}
	}


	return editDistanceHelper(s1, s2, output);
}

//using reucrsion approach
int editDistance(string s1, string s2) {
	//base case
	if(s1.size() == 0 && s2.size()==0){
		return 0;
	}

	//recursive call
	int a;
	int x=INT_MAX;
	int y=INT_MAX;
	int z =INT_MAX;
	if(s1[0] == s2[0]){
		return editDistance(s1.substr(1), s2.substr(1));
	}else{

		if(s1.size()!=0){
			//add char
			x = 1+editDistance(s1.substr(1), s2);
		}
		if(s2.size()!=0){
			//remove char
			y = 1 + editDistance(s1, s2.substr(1));
		}
		if(s1.size()!=0 && s2.size()!=0){
			//update char
			z = 1 + editDistance(s1.substr(1), s2.substr(1));
		}
		int ans=min(x, min(y,z));

		return ans;
	}
}

int editDistance2(string s1, string s2) {
	//base case
	if(s1.size() == 0 || s2.size()==0){
		return max(s1.size(), s2.size());
	}

	//recursive call
	int x=INT_MAX;
	int y=INT_MAX;
	int z =INT_MAX;
	if(s1[0] == s2[0]){
		return editDistance2(s1.substr(1), s2.substr(1));
	}else{

		// if(s1.size()!=0){
			//add char
			x = 1+editDistance2(s1.substr(1), s2);
		// }
		// if(s2.size()!=0){
			//remove char
			y = 1 + editDistance2(s1, s2.substr(1));
		// }
		// if(s1.size()!=0 && s2.size()!=0){
			//update char
			z = 1 + editDistance2(s1.substr(1), s2.substr(1));
		// }
		int ans=min(x, min(y,z));

		return ans;
	}
}


int main(){
    string s1, s2;
    cin>>s1>>s2;
    cout<<"edit distance using recursion approach: ";
    // cout<<editDistance(s1, s2)<<endl;
    cout<<editDistance2(s1, s2)<<endl;
    cout<<"using memoization approach: ";
    cout<<editDistanceMemo(s1, s2)<<endl;
    cout<<"using DP approach"<<endl;
    cout<<editDistanceDP(s1, s2)<<endl;


}