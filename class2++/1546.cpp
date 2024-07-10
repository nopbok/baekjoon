#include <iostream>
using namespace std;

int main(){
    double n, arr[1000], sum = 0, max = 0;
    cin >> n;
    cout.precision(12);
	cout << fixed;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (max < arr[i]){
            max = arr[i];
        }
        sum += arr[i];
    }
    cout << sum / n / max * 100;
}
