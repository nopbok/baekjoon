#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	string str;
	cin >> a >> b >> c;
	cout << a + b - c << '\n';
	str.append(to_string(a) + to_string(b));
	cout << stoi(str) - c << '\n';
}

/*
int main(){
    int a, b, c;
	cin >> a >> b >> c;
    cout << a + b - c << '\n';
    int temp = b;
    while(temp > 0){
        a *= 10;
        temp /= 10;
    }
    cout << a + b - c << '\n';
    return 0;
}
*/
