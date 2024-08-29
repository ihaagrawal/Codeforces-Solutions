// 492A - Vanya and Cubes
// https://codeforces.com/problemset/problem/492/A

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1, sum = 0;

    while (true) {
        sum += i;
        if (sum > n) {
            cout << i - 1 << endl; 
            return 0;
        }
        i++;
        n -= sum;
    }
}
