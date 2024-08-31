// 432A - Choosing Teams
// https://codeforces.com/problemset/problem/432/A

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> per(n);
    int count = 0;

    for (int i = 0; i < n; ++i) {
        cin >> per[i];
        if (5 - per[i] >= k) ++count;
    }

    int max_teams = count / 3;
    cout << max_teams << endl;
    return 0;
}
