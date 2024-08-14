#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int k, n, m, num, cnt = 0;
    
    cin >> k;
    for(int i = 0; i < k; i++){
        cnt = 0;
        cin >> n >> m;
        queue<pair<int, int>> q;
        priority_queue<int> pq; //우선순위 큐

        for (int j = 0; j < n; j++) {
            cin >> num;
            q.push({j, num});
            pq.push(num);
        }
        while(!q.empty()) {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();

            if (pq.top() == value) {
                pq.pop();
                cnt++;
                if (index == m) {
                    cout << cnt << endl;
                    break;
                }
            }
            else q.push({index, value});
        }
    }
    
    return 0;
}