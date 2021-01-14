#include <iostream>

using namespace std;
struct DATE {
	int h, m, plus, result;
} time; 

int main() {
	TryAgain:
	cout << "Enter your current time" << endl;
	cout << "Hours: " << endl;
	cin >> time.h;
	if (time.h > 24) {
		cout<<"Please enter hours from 0 to 24 ";
		goto TryAgain;
	}
	cout << "Mins: " << endl;
	cin >> time.m;
	if (time.m > 60) {
		cout << "Please enter hours from 0 to 60 ";
		goto TryAgain;
	}
	cout << "How many minutes to increase the time: ";
    cin >> time.plus;
	
	DATE math;
	math.result = time.h * 60 + time.m + time.plus;
	math.h = math.result / 60;
	math.m = math.result % 60;
	while (math.h >= 24) {
		math.h = math.h % 24;
	}
	cout << "Result: " << endl;
	cout << math.h << ":" << math.m;
	
	return 0;
}