#include <iostream>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m, flag = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (i == 1) continue;
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0) flag = 1;
        }
        if (flag == 0) cout << i << endl;
        flag = 0;
    }

    return 0;
}

//에라토스테네스의 체 방법 (배수 지워나가는 방법)
/*
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int m, n;

    cin >> m >> n;
    vector<int> arr(n + 1, 0);

    for(int i = 2; i <= n; i++) {
        arr[i] = i;
    }

    for(int i = 2; i * i <= n; i++) {
        if(arr[i] == 0) continue;
        for(int j = 2 * i; j <= n; j += i) {
            if(arr[j] == 0)  continue;
            else arr[j] = 0;
        }
    }

    for(int i = m; i <= n; i++) {
        if(arr[i] != 0) cout << arr[i] << "\n";
    }
    return 0;
}
*/