// 146A - Lucky Ticket
// https://codeforces.com/problemset/problem/146/A

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ticket;
    cin >> ticket;

    for (char c : ticket) {
        if (c != '4' && c != '7') {
            cout << "NO" << endl;
            return 0;
        }
    }

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n / 2; i++) sum1 += ticket[i] - '0';
    for (int i = n / 2; i < n; i++) sum2 += ticket[i] - '0';

    if (sum1 == sum2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
