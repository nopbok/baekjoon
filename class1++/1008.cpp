#include <iostream>
using namespace std;

int main() {
	long double a = 0, b = 0, c = 0;
	cin >> a >> b;
	cout.precision(12);
	cout << fixed;
	c = a / b;
	cout << c;
}
