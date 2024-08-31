// 617A - Elephant
// https://codeforces.com/problemset/problem/617/A

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int full = x / 5, rem = x % 5;
    if (rem > 0) cout << full + 1 << endl;
    else cout << full << endl;

    return 0;
}
