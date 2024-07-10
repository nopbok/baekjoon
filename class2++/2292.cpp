#include <iostream>
using namespace std;

int main() {
	int n = 0, tmp = 1, result = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (n < 6 * i + tmp + 1) {
			result = i + 1;
			break;
		}
		tmp += 6 * i;
	}
	if (n == 1) result = 1;
	cout << result;
	return 0;
}
