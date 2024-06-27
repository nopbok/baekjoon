#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int n = 0, sum = 0;
	char a[1000] = {0};
	cin >> n >> a;
	for (int i = 0; i < n; i++) {
		sum += (int)a[i] - 48;
	}
	cout << sum;
}


//// instead of atoi //// 

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0, sum = 0;
	char a[1000] = {0};
	cin >> n >> a;
	for (int i = 0; i < n; i++) {
		sum += a[i] - '0';
	}
	cout << sum;
}
*/