#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(pair<int, string> p1, pair<int, string> p2){
    return p1.first < p2.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;
    vector<pair<int, string>> v(n);

    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    stable_sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++) cout << v[i].first << " " << v[i].second << '\n';
    return 0;
}