#include <iostream>
#include <string>
using namespace std;

int main(){
    long long l = 0, sum = 0, m = 1;
    string n;
    cin >> l >> n;
    for(int i = 0; i < l; i++){
        m = 1;
        for (int j = 0; j < i; j++){
            m *= 31;
            m %= 1234567891;
        }
        sum += ((n[i] - 96) * m) % 1234567891;
    }
    cout << sum % 1234567891;
    return 0;
}