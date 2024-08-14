#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int k, n, l = 0, max_len = 0, cnt = 0;
    vector<int> v;

    cin >> k >> n;
    for (int i = 0; i < k; i++) {
        cin >> l;
        v.push_back(l);
        max_len = max(max_len, v[i]);
    }

    long long left = 1, right = max_len;
    long long mid = (left + right) / 2;

    while (left <= right) {
        cnt = 0;
        for (int i = 0; i < k; i++) cnt += v[i] / mid;
        if (cnt >= n) left = mid + 1;
        else right = mid - 1;
        mid = (left + right) / 2;
    }
    cout << mid << endl;

    return 0;
}