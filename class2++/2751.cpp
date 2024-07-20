#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, num = 0;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) cout << v[i] << '\n';
    return 0;
}

/* 입력받는 부분 참고
cin >> n;
vector<int> v(n);
for(int i = 0; i < n; i++) {
    cin >> v[i];
}
*/