#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	//--------------------------------------------
	float value1 = 2.3f;	
	cout.precision(2);
	cout << value1<<endl;
	//--------------------------------------------

	//--------------------------------------------
	float value2 = 2.3f;
	cout.setf(ios::fixed);
	cout << setprecision(2) << value2 << endl;
	//--------------------------------------------

	//--------------------------------------------
	float value3 = 2.123456f;
	cout.setf(ios::fixed);
	cout << setprecision(6) << value3 ;
	//--------------------------------------------

	//--------------------------------------------
	float value4 = 2.123456f;
	cout << setprecision(2) << endl;
	cout << value4;
	//--------------------------------------------

	//--------------------------------------------
	float value5 = 2.123456f;
	cout << setprecision(0) << endl;
	cout << value5;
	//--------------------------------------------
	
	
	
	return 0;
}