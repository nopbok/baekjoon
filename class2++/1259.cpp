#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    int flag = 0;
    while (1) {
        flag = 0;
        cin >> n;
        if (n == "0") break;
        for(int i=0;i<n.length();i++){
            if (n[i] != n[n.length() - i -1]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) cout << "no" << "\n";
        else cout << "yes" << "\n";
    }
    return 0;
}