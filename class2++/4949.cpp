#include <iostream>
#include <string>
#include <stack>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str, save;
    int f1 = 0, f2 = 0;

    while (1) {
        stack<string> s;

        getline(cin, str);
        if (str == ".") break;
        
        for (int i = 0; i < str.length(); i++) {
            save = str[i];
            if (save == "(" || save == "[") s.push(save);
            else if (save == ")"){
                if (!s.empty() && s.top() == "(") s.pop();
                else f1 = 1;
            }
            else if (save == "]") {
                if (!s.empty() && s.top() == "[") s.pop();
                else f2 = 1;
            }
        }
        if (s.empty() && f1 == 0 && f2 == 0) cout << "yes" << endl;
        else cout << "no" << endl;
        f1 = 0, f2 = 0;
    }

    return 0;
}