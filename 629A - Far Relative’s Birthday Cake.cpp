// 629A - Far Relative’s Birthday Cake
// https://codeforces.com/problemset/problem/629/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> rowCount(n, 0), colCount(n, 0);
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            char cell;
            cin >> cell;
            if (cell == 'C') {
                rowCount[i]++;
                colCount[j]++;
            }
        }
    }
    
    int happiness = 0;
    
    for (int i = 0; i < n; ++i) {
        int count = rowCount[i];
        if (count > 1) {
            happiness += count * (count - 1) / 2;
        }
    }
    
    for (int j = 0; j < n; ++j) {
        int count = colCount[j];
        if (count > 1) {
            happiness += count * (count - 1) / 2;
        }
    }
    
    cout << happiness << endl;
    return 0;
}
