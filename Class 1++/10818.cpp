#include <iostream>
using namespace std;

int main() {
	int n = 0, min = 0, max = 0;
	int arr[1000001] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	min = arr[0];
	max = arr[0];
	for (int i = 1; i < n; i++) {
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << min << " " << max;
}
