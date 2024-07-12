#include <iostream>
using namespace std;

int main(){
    int t=0, k=0, n=0;
    int arr[15][15] = {0};
    cin >> t;
    for(int i=0; i < t; i++){
        cin >> k >> n;
        for (int j=0; j <= k; j++){
            for (int p=1; p <= n; p++){
                if (j == 0) arr[0][p] = p;
                else if (p == 1) arr[j][1] = 1;
                else arr[j][p] = arr[j-1][p] + arr[j][p-1];
            }
        }
        cout << arr[k][n] << "\n";
    }
    return 0;
}