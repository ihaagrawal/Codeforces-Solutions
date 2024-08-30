// 80A - Panoramix's Prediction
// https://codeforces.com/problemset/problem/80/A

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    int next = n + 1;
    while (!isPrime(next)) next++;
    
    if (next == m) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
