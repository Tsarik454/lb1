#include <iostream>
using namespace std;


int main() {
	cout<<"Enter value of pow:  ";
	int n;
	int two = 2;
	cin >> n;
	if (n <= 63 && n != 0) {
		for (int i = 1; i < n; i++) {

			two = two * 2;
		}
		cout <<"Result: " <<two << endl;
	}
	else {
		cout << "Error" << endl;
	}
		
	

	return 0;
}