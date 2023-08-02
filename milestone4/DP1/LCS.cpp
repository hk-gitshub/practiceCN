#include<bits/stdc++.h>
using namespace std;

int LCS(string s, string t){

    //base case
    //if any string size is 0 LCS will be 0
    if(s.size() == 0 || t.size() == 0) return 0;

    //recursive call
    if(s[0] == t[0]) return 1 + LCS(s.substr(1), t.substr(1));

    int a=LCS(s.substr(1), t);
    int b=LCS(s, t.substr(1));
    //ingnore below step 
    //becuase below step is redundent covered in above steps
    int c=LCS(s.substr(1), t.substr(1));

    return max(a, max(b,c));

}

int main(){
    string s, t;
    cin>>s>>t;
    cout<<LCS(s, t)<<endl;
}