#include<iostream>
using namespace std;

int main() {
	int Decimal=1234;
	// cin>>Decimal;

	long binaryValue=0;
	int reminder; 	//lastdigit
	long spaceValue=1;
	while (Decimal>0){

		reminder = Decimal % 2; 
		Decimal /= 2;
        cout<<"remineder: "<<reminder<<endl;
        cout<<"Decimal: "<<Decimal<<endl;

		binaryValue += reminder*spaceValue;
        cout<<"binary value: "<<binaryValue<<endl;

		spaceValue *= 10;
	}

	cout<<binaryValue;
}
