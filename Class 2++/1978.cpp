#include <iostream>
using namespace std;

int main() {
	int n = 0, arr[100] = { 0 }, cnt = 0, flag = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 1) continue;
		else if (arr[i] == 2) {
			cnt++;
			continue;
		}
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				cnt--;
				break;
			}
		}
		cnt++;
	}
	cout << cnt;
	return 0;
}

//// algorithm
/*
bool IsPrime(int num) {
    if(num <= 1) return false;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}
*/