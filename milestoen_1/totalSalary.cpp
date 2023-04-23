#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int basicSalary;
	char grade;
	int allow;
	double totalSalary;
	cin>>basicSalary>>grade;

     double hra = 0.20 * basicSalary; // 20% of basic salary
     double da = 0.50 * basicSalary;  // 50% of basic salary
     double pf = 0.11 * basicSalary;  // 11% of basic salary

    if (grade=='A'){allow=1700;}
	else if (grade == 'B'){allow=1500;}
	else {allow=1300;}

	totalSalary=basicSalary+hra+da+allow-pf;

	int FindalTotalSalary=round(totalSalary);

	cout<<FindalTotalSalary;
}