// 381A - Sereja and Dima
// https://codeforces.com/problemset/problem/381/A

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; ++i) cin >> cards[i];

    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true;

    while (left <= right) {
        if (cards[left] > cards[right]) {
            if (turn) sereja += cards[left];
            else dima += cards[left];
            ++left;
        } else {
            if (turn) sereja += cards[right];
            else dima += cards[right];
            --right;
        }
        turn = !turn;  
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
