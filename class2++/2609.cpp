#include <iostream>
using namespace std;

int main(){
    int a=0, b=0, min = 1, max = 1, i = 2;
    cin >> a >> b;
    while (1){
        if (a/i == 0 || b/i == 0) {
            max *= a * b;
            break;
        }
        if (a%i != 0 || b%i != 0) {
            i++;
            continue;
        }
        a /= i;
        b /= i;
        max *= i;
        min *= i;
        i=2;
    }
    cout << min << "\n" << max;
    return 0;
}

//// Euclidean algorithm ////
/*
int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << "\n" << lcm(a, b);
}
*/