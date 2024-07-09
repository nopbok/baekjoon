#include <iostream>
using namespace std;

int main() {
    int n = 0, m = 0, sum = 0, max = 0;
    int card[100] = { 0 };
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (i == j || j == k || k == i) continue;
                sum = card[i] + card[j] + card[k];
                if (sum > m) continue;
                if (max < sum) max = sum;
            }
        }
    }
    cout << max;
    return 0;
}
