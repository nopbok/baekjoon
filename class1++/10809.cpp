#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0, cnt[27] = { 0 };
	string str;
	cin >> str;
	for (int i = 0; i < 26; i++) cnt[i] = -1;
	for (int i = 0; i < str.length(); i++) {
		if (cnt[str[i] - '0' - 49] != -1) continue; //- '0' - 49를 - 97로 바꿔도 됨
		cnt[str[i] - '0' - 49] = i;
	}
	for (int i = 0; i < 26; i++) cout << cnt[i] << " ";
}
