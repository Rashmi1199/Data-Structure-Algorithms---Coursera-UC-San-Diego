# Good job! (Max time used: 0.01/5.00, max memory used: 9121792/536870912.)

#include<iostream>
using namespace std ; 

int sum_AplusB(int a, int b) {
	return a + b; 
}

int main() {
	int a, b; 
	cin >> a >> b; 
	cout << sum_AplusB(a, b) << endl;
}
