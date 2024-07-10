#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 0;
	cin >> a;
	if (a >= 90) cout << "A";
	else if (80 <= a && a <= 89) cout << "B";
	else if (70 <= a && a <= 79) cout << "C";
	else if (60 <= a && a <= 69) cout << "D";
	else cout << "F";
}

