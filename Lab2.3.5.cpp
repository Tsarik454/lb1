#include <iostream>
using namespace std;
int main(void) {
	TryAgain:
	cout << "Enter value: ";
	int k;
	cin >> k;
	if (k > 1 && k<100) {
		cout << '+';
		for (int i = 0; i < k-2; i++)
			cout << '-';
		cout << '+' << endl;
		for (int i = 0; i < k-2; i++) {
			cout << '|';
			for (int j = 0; j < k-2; j++)
				cout << ' ';
			cout << '|' << endl;
		}
		cout << '+';
		for (int i = 0; i < k-2; i++)
			cout << '-';
		cout << '+' << endl;
	}
	else {
		
		cout << "Error"<<endl;
		goto TryAgain;
	}
	return 0;
}
