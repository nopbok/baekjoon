#include <iostream>
#include <stack>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    stack<int> s;
    int n = 0, num = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num != 0) s.push(num);
        else s.pop();
    }
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum << endl;

    return 0;
}