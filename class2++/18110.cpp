#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> //반올림 함수 round 사용 위함
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    double n, num, sum = 0, s = 0, size = 0;
    vector<double> v;

    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    s = round(v.size() * 0.15);
    size = v.size() - s - s;
    for (int i = s; i < v.size() - s; i++) sum += v[i];
    cout << round(sum / size) << endl;

    return 0;
}