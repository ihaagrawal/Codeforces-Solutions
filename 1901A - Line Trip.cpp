// 1901A - Line Trip
// https://codeforces.com/problemset/problem/1901/A


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int diff = max(abs(0 - arr[0]), 2 * abs(arr[n-1] - x));
        for (int i = 0; i < n - 1; i++) {
            diff = max(diff, abs(arr[i] - arr[i+1]));
        }

        cout << diff << endl;
    }

    return 0;
}
