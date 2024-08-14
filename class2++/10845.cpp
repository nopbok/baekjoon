#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int front = -1, back = -1, n, cnt = 0;
    int arr[10001] = {0};
    string str;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> str;
        if (str == "push"){
            cin >> arr[++back];
            cnt++;
            if (back == 0) ++front;
        }
        else if (str == "pop"){
            if (front == -1) {
                back = -1;
                cout << -1 << endl;
            }
            else if (front == back && front != -1) {
                cout << arr[back] << endl;
                front = -1;
                back = -1;
                cnt--;
            }
            else { 
                cout << arr[front++] << endl;
                cnt--;
            }
        }
        else if (str == "size") cout << cnt << endl;
        else if (str == "front"){
            if (front != -1) cout << arr[front] << endl;
            else cout << -1 << endl;
        }
        else if (str == "back"){
            if (back != -1) cout << arr[back] << endl;
            else cout << -1 << endl;
        }
        else if (str == "empty"){
            if (front == -1) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}
