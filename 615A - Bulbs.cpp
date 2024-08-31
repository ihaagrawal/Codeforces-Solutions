// 615A - Bulbs
// https://codeforces.com/problemset/problem/615/A


#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    set<int> on;

    for (int i = 0; i < n; ++i) {
        int xi;
        cin >> xi;

        for (int j = 0; j < xi; ++j) {
            int bulb;
            cin >> bulb;
            on.insert(bulb);
        }
    }

    for (int i = 1; i <= m; ++i) {
        if (on.find(i) == on.end()) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
