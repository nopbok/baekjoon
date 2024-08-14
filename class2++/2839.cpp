#include <iostream>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, min = 10000, cnt = 0;
    cin >> n;

    if (n % 3 == 0) min = n / 3;
    if (n % 5 == 0) if (min > n / 5) min = n / 5;
    while (1) {
        n -= 3;
        cnt++;
        if (n < 0) {
            cnt = -1;
            break;
        }
        if (n % 5 == 0) {
            cnt += n / 5;
            break;
        }
    }
    
    if (min != 10000) {
        if (cnt != -1) {
            if (min > cnt) min = cnt;
        }
    }
    else min = cnt;
    cout << min << endl;

    return 0;
}