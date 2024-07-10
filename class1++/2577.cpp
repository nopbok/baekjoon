#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, sum = 0, arr[10] = { 0 };
	cin >> a >> b >> c;
	sum = a * b * c;
	for (;sum > 0;) {
		arr[sum % 10]++;
		sum /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << '\n';
	}
}

/*
int main() {
	int a, b, c, cnt = 0, arr[10] = { 0 };
	string sum;
	cin >> a >> b >> c;
	sum = to_string(a * b * c);
	for (int i = 0; i < sum.length(); i++) {
HERE:
		if (sum[i] - 48 == cnt) {
			arr[cnt]++;
			cnt = 0;
		}
		else {
			cnt++;
			goto HERE;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << '\n';
	}
}
*/
