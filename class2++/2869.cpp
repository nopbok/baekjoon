#include <iostream>
using namespace std;

int main(){
    int a=0, b=0, v=0, sum=0, cnt = 1;
    cin >> a >> b >> v;
    cnt += (v-a) / (a-b);
    if ((v-a) % (a-b) != 0) cnt++;
    if (a >= v) cnt = 1;
    cout << cnt << "\n";
    return 0;
}