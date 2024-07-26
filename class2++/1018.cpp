#include <iostream>
using namespace std;

char arr[51][51] = {0};

int check(int row, int column) {
    int black = 0, white = 0; //(0, 0), (0, 2) 등 더했을 때 짝수 고려

    for (int i = row; i < row + 8; i++) {
        for (int j = column; j < column + 8; j++) {
            if ((i + j) % 2 == 0 && arr[i][j] == 'W' || (i + j) % 2 == 1 && arr[i][j] == 'B')
                black++;
            else if ((i + j) % 2 == 0 && arr[i][j] == 'B' || (i + j) % 2 == 1 && arr[i][j] == 'W')
                white++;
        }
    }

    return min(black, white);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, min = 1000000, sum = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> arr[i][j];
    }
    for (int i = 0; i < n - 7; i++){
        for (int j = 0; j < m - 7; j++){
            sum = check(i, j);
            if (min > sum) min = sum;
        }
    }
    cout << min << '\n';
    return 0;
}