#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, cnt = 0, num = 666, result = 666, flag = 0;

    cin >> n;
    while (1) {
        if (n == cnt) break;
        if (num == 0 || flag == 1) {
            result++;
            num = result;
        }
        flag = 0;
        if (num % 10 == 6){
            num /= 10;
            if (num % 10 == 6){
                num /= 10;
                if (num % 10 == 6) {
                    cnt++;
                    flag = 1;
                }
                
            }
        }
        num /= 10;
    }
    cout << result << '\n';
    return 0;
}