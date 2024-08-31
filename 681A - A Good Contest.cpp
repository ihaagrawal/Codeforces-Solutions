// 681A - A Good Contest
// https://codeforces.com/problemset/problem/681/A

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string name;
        int before, after;
        cin >> name >> before >> after;
        
        if (before >= 2400 && after > before) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
