#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cout << "Enter number: ";
	int n;
	cin >> n;
	int f=1;

	for (int i = 1; i<=n; i++) {
		f = f * i;
		
	}
	cout << "Factorial of this number is: " << f << endl;
	return 0;
}