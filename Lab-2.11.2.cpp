#include <iostream>
using namespace std;
struct DATE {
	int h, m, result;
} time;

int main() {
TryAgain:
	//-------------------------------------------------
	DATE math2;
	cout << "Enter your current time" << endl;
	cout << "Hours1: " << endl;
	cin >> time.h;
	cout << "Hours2: " << endl;
	cin >> math2.h;
	if (time.h > 24 && math2.h>24) {
		cout << "Please enter hours from 0 to 24 ";
		goto TryAgain;
	}
	cout << "Mins1: " << endl;
	cin >> time.m;
	cout << "Mins2: " << endl;
	cin >> math2.m;
	if (time.m > 60 && math2.m > 60) {
		cout << "Please enter hours from 0 to 60 ";
		goto TryAgain;
	}
	//-------------------------------------------------

	//-------------------First-------------------------
	DATE math;
	math.result = time.h * 60 + time.m;
	math.h = math.result / 60;
	math.m = math.result % 60;
	while (math.h >= 24) {
		math.h = math.h % 24;
	}
	cout << "First: " << endl;
	cout << math.h << ":" << math.m << endl;
	//-------------------------------------------------

	//------------------Second-------------------------
	DATE math1;
	math1.result = math2.h * 60 + math2.m;
	math1.h = math1.result / 60;
	math1.m = math1.result % 60;
	while (math1.h >= 24) {
		math1.h = math1.h % 24;
	}
	cout << "Second: " << endl;
	cout << math1.h << ":" << math1.m<<endl;
	//-------------------------------------------------

	//-------------------------------------------------
	DATE math3;
	math3.h = math2.h - time.h;
	math3.m = math2.m - time.m;
	if (math3.m < 0) {
		math3.m = 60 + math3.m;
		math3.h = math3.h - 1;
	}
	cout << "Result " << endl;
	cout << math3.h << ":" << math3.m;
	//-------------------------------------------------
	
	return 0;
}