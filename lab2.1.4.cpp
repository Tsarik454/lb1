#include <iostream>
using namespace std;

int main()
{
	int year, month, day;
	cout << "First enter year then month then day\nyear: ";
	cin >> year;
	cout << "month: ";
	cin >> month;
	cout << "day: ";
	cin >> day;

	if (1900 > year || year > 2099 || month > 12 || month < 1) {
		cout << "It would be better if the year will is in 20th-21st century";
	}
	else
	{
		month--;
		if (month < 0) { month += 12; year--; }
		month *= 83;
		month /= 32;
		month += day;

	}
	return 0;
}
