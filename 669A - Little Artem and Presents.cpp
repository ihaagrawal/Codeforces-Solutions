// 669A - Little Artem and Presents
// https://codeforces.com/problemset/problem/669/A

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int full = n / 3;
    int rem = n % 3;

    int mx = 2 * full;
    if (rem != 0) {
        mx += 1;
    }

    cout << mx << endl;

    return 0;
}
