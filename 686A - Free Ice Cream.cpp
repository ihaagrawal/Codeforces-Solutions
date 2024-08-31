// 686A - Free Ice Cream
// https://codeforces.com/problemset/problem/686/A


#include <iostream>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;
    
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        char operation;
        long long di;
        cin >> operation >> di;
        
        if (operation == '+') x += di;
        else if (operation == '-') {
            if (x >= di) x -= di;
            else count++;
        }
    }
    
    cout << x << " " << count << endl;
    return 0;
}
