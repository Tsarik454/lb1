#include <iostream>
#include <math.h>
using namespace std;

int main() {

	cout << "Enter two integer numbers: ";
	int a;
	int b;
	cin >> a;
	cin >> b;
	
	float a_f = a;
	float b_f = b;
	float k = 1 / b_f;
	float p = 1 / a_f;
	if (fabs(k - p)<0.000001) {
		cout << "Results are equal (by 0.000001 epsilon) " << endl;
	}
	else {
		cout << "Results are not equal (by 0.000001 epsilon) ";
	}

	return 0;

}