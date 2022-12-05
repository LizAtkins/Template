// Elizabeth Atkins
// CIS 1202 C++ Software Development

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

template <typename T>
double half(T temp) {
	return temp / 2.0;
}

int main() {
	double a = 5.7;
	float b = 6.9f;
	int c = 7;

	cout << setprecision(3) << showpoint;
	cout << half(a) << endl << half(b) << endl << ceil(half(c)) << endl;


	cout << endl << endl;
	system("pause");
	return 0;
}


