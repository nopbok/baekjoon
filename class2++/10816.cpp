#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    vector<int> v;
    int num = 0, n = 0, m = 0, num2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> num;

        // upper_bound - lower_bound 사용
        // --> 주어진 값보다 큰 값이 처음으로 나타난 위치 - 주어진 값 이상이 처음 처음으로 나타난 위치
        cout << upper_bound(v.begin(), v.end(), num)
        - lower_bound(v.begin(), v.end(), num) << " ";
    }

    return 0;
}