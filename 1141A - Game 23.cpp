// 1141A - Game 23
// https://codeforces.com/problemset/problem/1141/A

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if(n == m){
        cout << 0 << endl;
        return 0;
    }

    if(m % n != 0){
        cout << -1 << endl;
        return 0;
    }

    int d = m/n;

    int count = 0;
    while(d % 2 == 0) {
        d /= 2;
        count++;
    }

    while(d % 3 == 0){
        d /= 3;
        count++;
    }

    if(d != 1) cout << -1 << endl;
    else cout << count << endl;
    return 0;
}
