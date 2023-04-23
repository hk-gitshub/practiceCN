#include<iostream>
using namespace std;

// convert all Fahrenheit values from Start to End at the gap of w.
// celcious=5/9(f-32)
int main(){

     int sF, eF, w;
	 int celsius;

	 cout<<"starting fernhit value: ";
	 cin>>sF;

    cout << "ending fernhit value: ";
	cin>>eF;

    cout << "fernhit gap value: ";
	cin>>w;

	while(sF <= eF){
		celsius=(sF - 32)*5/9;

		cout<<sF<<" "<<celsius<<endl;
		sF += w;
	}
}