#include <iostream>
using namespace std;

int main() {
	int n = 0, t = 0, p = 0, T = 0, six = 6;
	int arr[6] = { 0 };
	cin >> n;
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
		if (arr[i] == 0) six--;
	}
	cin >> t >> p;
	for (int i = 0; i < 6; i++) {
		if (arr[i] > t) {
			T += arr[i] / t;
			if (arr[i] % t == 0) T--;
		}
	}
	T += six;
	cout << T << "\n" << n / p << " " << n % p;
	return 0;
}
