#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, flag, num;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end()); //이진탐색은 오름차순 정렬일 경우에만 사용 가능 
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> num;
        cout << binary_search(a.begin(), a.end(), num) << '\n';
        //이진탐색 return 값은 1(true) 또는 0(false)이다. 
    }
    return 0;
}
