// 104A - Blackjack
// https://codeforces.com/problemset/problem/104/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 10 || n > 21) cout << 0 << endl;
    else if (n == 20) cout << 15 << endl;
    else cout << 4 << endl;
    return 0;
}
