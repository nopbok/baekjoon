#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(string a, string b) {
	if (a.length() == b.length()) return a < b;
	else return a.length() < b.length();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str, tmp;
    vector<string> v;
    int n=0, cnt = 0;;
    cin >> n;
    cin.ignore(); // '\n' 버퍼 삭제
    for (int i=0; i < n; i++){
        getline(cin, str);
        v.push_back(str);
    }
    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end()); // 중복 제거
    for (int i=0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
    return 0;
}