#include <iostream>
using namespace std;

int cal(int a){
    int sum = 1;
    for(int i=1; i <= a; i++){
        sum *= i;
    }
    return sum;
}

int main(){
    int n=0, k=0, sum=0;
    cin >> n >> k;
    sum = cal(n) / (cal(n-k) * cal(k));
    cout << sum << "\n";
    return 0;
}