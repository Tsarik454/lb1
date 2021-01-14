#include <iostream>
using namespace std;
int main() {
	int ip_1;
	int ip_2;
	int ip_3;
	int ip_4;
	cout << "Write four numbers of IP 1 to 255 :" << endl;
	cin >> ip_1;
	cin >> ip_2;
	cin >> ip_3;
	cin >> ip_4;
	if (ip_1 >= 1 && ip_1 <= 255 && ip_2 >= 1 && ip_2 <= 255 && ip_3 >= 1 && ip_3 <= 255 && ip_4 >= 1 && ip_4 <= 255) {
		cout <<"IP is: "<< ip_1 << "." << ip_2 << "." << ip_3 << "." << ip_4 << endl;
	}
	else {
		cout << "Error. Write again ";
	}
	return 0;
}