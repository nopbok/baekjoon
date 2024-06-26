#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int i = 0, j = 0;
	int num = 0;
	cin >> num;
	for (i = 0; i < num; i++) {
		for (j = num-1; j > i; j--) {
			cout << " ";
		}
		for (int z = 0; z < i+1; z++) cout << "*";
		cout << '\n';
	}
}
