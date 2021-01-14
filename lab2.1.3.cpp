#include <iostream>
using namespace std;

int main()
{
	int sys;
	float m, ft, in;

	//
	cout << "Choose measurement system\n0 - Metric; 1 - Imperial ";
	cin >> sys;
	if (sys == 0) { cout << "To 0 - metric; 1 - feet; 2 - inches"; cin >> sys;
	if (sys == 0) {
		cout << "Enter the first value then second"; cin >> m; cout << "\n"; cin >> in;
		cout << sys / in << " meters";}
	else if (sys == 1) {
		cout << "Enter the first value then second"; cin >> m; cout << "\n"; cin >> in;
		cout << sys/1/304.8 << " feet";}
	}

	//

	return 0;
}

