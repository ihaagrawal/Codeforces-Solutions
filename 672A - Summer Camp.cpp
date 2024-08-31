// 672A - Summer Camp
// https://codeforces.com/problemset/problem/672/A

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str = "";
    int curr = 1;

    while (str.length() < n) {
        str += to_string(curr);
        curr++;
    }

    cout << str[n - 1] << endl;

    return 0;
}
