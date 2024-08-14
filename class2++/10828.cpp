#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

int arr[10001] = {0};

int check(int i) {
    if (i == 0) return i;
    if (arr[i] == 0) {
        i--;
        return check(i);
    }
    else return i;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n = 0, num = 0, cnt = 0, tmp = 0;
    string str;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "push") {
            cin >> arr[i];
        }
        tmp = check(i);
        if (str == "top") {
            if (arr[tmp] == 0) cout << -1 << endl;
            else cout << arr[tmp] << endl;
        }
        else if (str == "pop") {
            if (arr[tmp] == 0) cout << -1 << endl;
            else {
                cout << arr[tmp] << endl;
                arr[tmp] = 0;
            }
        }
        else if (str == "empty") {
            if (arr[tmp] == 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if (str == "size") {
            for (int i = 0; i < 10001; i++) if (arr[i] != 0) cnt++;
            cout << cnt << endl;
        }
        cnt = 0;
    }
    return 0;
}