#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    double n, num, sum = 0, cnt = 0;
    vector<double> v;
    vector<double> v2(8001);
    vector<double> v3;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        v.push_back(num);
        v2[4000 + num]++;
        sum += num;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 8001; i++) { //최빈값 구하는 부분
        if (cnt < v2[i]) { //개수 다르면 벡터 초기화
            v3.clear();
            v3.push_back(i - 4000);
            cnt = v2[i];
        }
        else if (cnt == v2[i]) v3.push_back(i - 4000); //같으면 숫자 저장
    }

    cout << round(sum / n) + 0.0 << endl; //-0 제외
    cout << v[round(n / 2) - 1] << endl;
    cout << (v3.size() == 1 ? v3.front() : v3[1]) << endl;
    cout << v.back() - v.front() << endl;

    return 0;
}