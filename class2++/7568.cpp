#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n = 0, h = 0, w = 0, cnt[50];
    cin >> n;
    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++) {
        cin >> w >> h;
        v.push_back(make_pair(w, h));
        cnt[i] = 1;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (v[i].first < v[j].first && v[i].second < v[j].second) cnt[i]++;
        }
        cout << cnt[i] << " ";
    }
    return 0;
}