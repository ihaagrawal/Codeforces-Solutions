// 701A - Cards
// https://codeforces.com/problemset/problem/701/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i].first;
        cards[i].second = i + 1;  
    }

    sort(cards.begin(), cards.end());

    for (int i = 0; i < n / 2; i++) {
        cout << cards[i].second << " " << cards[n - i - 1].second << endl;
    }

    return 0;
}
