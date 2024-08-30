// 304A - Pythagorean Theorem II
// https://codeforces.com/problemset/problem/304/A

#include <iostream>
#include <unordered_set>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> squares;
    for (int i = 1; i <= n; i++) {
        squares.insert(i * i);
    }

    int count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            int sumOfSquares = i * i + j * j;
            int k = sqrt(sumOfSquares);
            if (k <= n && k * k == sumOfSquares) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
