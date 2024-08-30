// 119A - Epic Game
// https://codeforces.com/problemset/problem/119/A

#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    while (true) {
        int simon = __gcd(a, n);
        if (simon > n) {
            cout << "1" << endl; 
            break;
        }
        n -= simon;

        int antisimon = __gcd(b, n);
        if (antisimon > n) {
            cout << "0" << endl; 
            break;
        }
        n -= antisimon;
    }

    return 0;
}
