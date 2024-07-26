#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n = 0, k = 0, tmp = 0, size = 0, flag = 0;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> a(n);
    for (int i = 0; i < n; i++) v[i] = i + 1;
    tmp = v[k - 1];
    if (k == 1) size = 0;
    else size = v[k - 2];
    for (int i = 0; i < n; i++) {
        a[i] = tmp;
        if (v.size() == 1) break;
        v.erase(v.begin() + size);
        size = size + k;
        while (1) {
            if (size > v.size()) size -= v.size();
            else break;
        }
        size--;
        tmp = v[size];
    }
    cout << "<";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << a[i];
            break;
        }
        cout << a[i] << ", ";
    }
    cout << ">" << '\n';
    return 0;
}

//////// queue를 이용한 풀이 (더 간단하다. ) ////////

/* 
#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n = 0, k = 0;
    queue<int> q;
    
	cin >> n >> k;
	for (int i = 1; i <= n; i++) q.push(i);
	cout << "<";
	while (q.size() != 0) {
		for (int i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1) cout << ", ";
		q.pop();
	}
	cout << ">";
	return 0;
}
*/