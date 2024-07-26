#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b){
    if (a.first == b.first) return a < b;
    else return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    sort(p.begin(), p.end(), cmp);
    for (int i = 0; i < n; i++) cout << p[i].first << " " << p[i].second << "\n";

    return 0;
}