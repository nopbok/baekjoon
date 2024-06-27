#include <iostream>
using namespace std;

int main() {
	int str, arr[10], top;
	int cnt = 1;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}
	top = arr[0];
	for (int i = 0; i < 8; i++) {
		if (top < arr[i+1]) {
			top = arr[i+1];
			cnt = i + 2;
		}
	}
	cout << top << '\n' << cnt;
}
