// 1373A - Donut Shops
// https://codeforces.com/problemset/problem/1373/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a < c) cout << 1 << " ";
        else cout << -1 << " ";

        if (a * b > c) cout << b << endl;
        else cout << -1 << endl;
    }

    return 0;
}
