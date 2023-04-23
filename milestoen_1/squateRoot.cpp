#include<iostream>
using namespace std;

int main() {
	
	int square=345;
	// cin>>square;

	int root=1;

	if (square == 0 || square == 1 ) root=1;

	int i=1;

	while(root<=square){
			i++;
			root = i*i;
		}
	cout<<i-1;
}
