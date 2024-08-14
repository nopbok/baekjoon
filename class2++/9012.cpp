#include <iostream>
#include <stack>
#include <string>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n = 0, f = 0;
    string str, save;
    
    cin >> n;
    for (int i = 0; i < n; i++){
        stack<string> s;
        
        cin >> str;
        for (int i = 0; i < str.length(); i++){
            save = str[i];
            if (save == "(") s.push("(");
            else if (save == ")") {
                if (!s.empty() && s.top() == "(") s.pop();
                else f = 1;
            }
        }
        if (s.empty() && f == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        f = 0;
    }

    return 0;
}