#include<iostream>
using namespace std;

int main() {
	int binary=1110000;
	// cin >> binary;

	int lastDigit, decV=0;
	int base=1;

	while(binary>0){

		lastDigit = binary % 10;

		binary /= 10;

		decV += lastDigit * base;

		base *= 2;
	}
	
	cout<<decV;
}
