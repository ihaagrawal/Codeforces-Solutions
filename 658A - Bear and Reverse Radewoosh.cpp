// 658A - Bear and Reverse Radewoosh
// https://codeforces.com/problemset/problem/658/A


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, c;
    cin >> n >> c;

    vector<int> p(n), t(n);  

    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    int limak_score = 0, radewoosh_score = 0;
    int limak_time = 0, radewoosh_time = 0;

    for (int i = 0; i < n; i++) {
        limak_time += t[i];
        limak_score += max(0, p[i] - c * limak_time);
    }

    for (int i = n - 1; i >= 0; i--) {
        radewoosh_time += t[i];
        radewoosh_score += max(0, p[i] - c * radewoosh_time);
    }

    if (limak_score > radewoosh_score) cout << "Limak" << endl;
    else if (limak_score < radewoosh_score) cout << "Radewoosh" << endl;
    else cout << "Tie" << endl;

    return 0;
}
