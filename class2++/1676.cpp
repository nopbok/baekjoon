#include <iostream>
using namespace std;

int main(){
    int n = 0, num = 1, cnt = 0, tmp = 0, two = 0, five = 0;
    cin >> n;
    if (n == 0) {
        cout << "0" << '\n';
        return 0;
    }
    while(n > 0){
        tmp = n;
        while(1){
            if (tmp % 2 == 0) {
                two++;
                tmp /= 2;
            }
            else break;
        }
        tmp = n;
        while(1){
            if (tmp % 5 == 0) {
                five++;
                tmp /= 5;
            }
            else break;
        }
        n--;
    }
    if (two > five) cnt = five;
    else cnt = two;
    cout << cnt << '\n';
}