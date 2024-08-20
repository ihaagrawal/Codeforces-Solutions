// 144A - Arrival of the General 
// https://codeforces.com/problemset/problem/144/A

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    int mx = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[mx]) mx = i;
    }

    int mn = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] <= arr[mn]) mn = i;
    }

    int swaps = mx + (n - 1 - mn);
    if(mx > mn) swaps--;

    cout << swaps << endl;
    return 0;
}
