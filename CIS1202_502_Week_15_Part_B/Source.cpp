/*
 * Kenneth Wilburn
 * CIS1202.502
 * 12/05/2021
 * Week 15 - Exceptions, Templates and Standard Template Library (STL) - Assignment #15b
 */

#include <iostream>
#include <iomanip>

using namespace std;

// Generic Template
template <class T>
T Half(T value) {
	T result;
	result = value / 2;

	return result;
}

// Explicit Template
template <>
int Half(int value) {
	int result;
	result = static_cast<int>(round((double)value / (double)2));

	return result;
}

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << fixed << setprecision(1);
	cout << "Double: Half of " << a << " Equals " << Half(a) << endl;
	cout << "Float: Half of " << b << " Equals " << Half(b) << endl;
	cout << "Integer: Half of " << c << " Equals " << Half(c) << endl;
	cout << endl;

	system("pause");
}