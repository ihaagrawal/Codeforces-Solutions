// 1300B - Assigning to Classes
// https://codeforces.com/problemset/problem/1300/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(2 * n);
        for (int i = 0; i < 2 * n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        
        int min_diff = arr[n] - arr[n-1];
        cout << min_diff << endl;
    }
    
    return 0;
}
