#include <iostream>
#include <stack>
#include <vector>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, num, cnt = 1, flag = 0;
    stack<int> s, s2;
    vector<int> v;
    vector<string> v2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    s.push(cnt);
    v2.push_back("+");
    for (int i = 0; v.size() != 0; i++) {
        if (!s.empty() && s.top() > v.front()) {
            flag = 1;
            break;
        }
        if (!s.empty() && v.front() == s.top()) {
            s.pop();
            v2.push_back("-");
            v.erase(v.begin());
            continue;
        }
        else {
            v2.push_back("+");
            s.push(++cnt);
        }
    }
    if (flag == 1) cout << "NO" << endl;
    else {
        for (int i = 0; i < v2.size(); i++) {
            cout << v2[i] << endl;
        }
    }

    return 0;
}