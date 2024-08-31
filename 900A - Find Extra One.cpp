// 900A - Find Extra One
// https://codeforces.com/problemset/problem/900/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int count_left = 0, count_right = 0;
    
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        
        if (x < 0) count_left++;
        else count_right++;
    }
    
    if (count_left <= 1 || count_right <= 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
