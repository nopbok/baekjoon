#include <iostream>
#include <string>
using namespace std;

int check(string str1, string str2, int cnt){
    int i = 0;
    cnt++;
    if (str2.length() == 4) {
        if (str2[0] == 'F') return check(str2, str1, cnt);
        else if (str2[0] == 'B') return check(str2, str1, cnt);
        else i = stoi(str2) + cnt;
    }
    else if (str2.length() == 8){
        if (str2[0] == 'F') return check(str2, str1, cnt);
        else i = stoi(str2) + cnt;
    }
    else i = stoi(str2) + cnt;
    return i;
}

int main(){
    string str1, str2, str3;
    int fb=0, f=0, b=0, i=0, cnt = 1;
    cin >> str1 >> str2 >> str3;
    
    if (str3.length() == 4) {
        if (str3[0] == 'F') i = check(str1, str2, cnt);
        else if (str3[0] == 'B') i = check(str1, str2, cnt);
        else i = stoi(str3) + 1;
    }
    else if (str3.length() == 8){
        if (str3[0] == 'F') i = check(str1, str2, cnt);
        else i = stoi(str3) + 1;
    }
    else i = stoi(str3) + 1;
    if (i % 3 == 0 && i % 5 == 0) cout << "FizzBuzz" << "\n";
    else if (i % 3 == 0) cout << "Fizz" << "\n";
    else if (i % 5 == 0) cout << "Buzz" << "\n";
    else cout << i << "\n";

    return 0;
}