#include <iostream>
using namespace std;

int main() {
	int t = 0, h = 0, w = 0, n = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		if (n % h == 0) cout << h * 100 + n / h << '\n';
		else cout << (n % h * 100) + n / h + 1 << '\n';
	}
}

//// my code ////
/*
int main() {
	int t = 0, h = 0, w = 0, n = 0, p = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		for (int j = 0; j < w; j++) {
			for (int k = 0; k < h; k++) {
				if (p == n) {
					cout << (k + 1) * 100 + j + 1 << '\n';
					break;
				}
				p++;
				if (k == h - 1 && p == n) {
					cout << 100 + j + 2 << '\n';
					break;
				}
			}
			if (p == n) {
				p = 1;
				break;
			}
		}
	}
}
*/
