#include <iostream>
#include <math.h>
using namespace std;
int main(void) {
float pi = 3.14159265359;
float x,y;
cout << "Enter value for x: ";
cin >> x;
y = (pow(x, 2)/(pow(M_PI, 2)*(pow(x, 2)+1./2))*(1+(pow(x, 2)/(pow(M_PI, 2)*pow(pow(x, 2) - 1./2, 2)))));
cout << "y = " << y;
return 0;
}
