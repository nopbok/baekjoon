#include <iostream>
using namespace std;

int main() {
	int n = 0, tmp = 0, sum = 0, result = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		sum = 0;
		tmp = i;
		while (tmp != 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum + i == n) {
			result = i;
			break;
		}
		else result = 0;
	}
	cout << result;
	return 0;
}
