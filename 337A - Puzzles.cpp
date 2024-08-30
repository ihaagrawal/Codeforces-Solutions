// 337A - Puzzles
// https://codeforces.com/problemset/problem/337/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> arr(m);
    for(int i=0;i<m;i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int mn = INT_MAX;
    for(int i=0;i+n-1<m;i++){
        mn = min(arr[i+n-1] - arr[i], mn);
    }

    cout << mn << endl;
    return 0;
}
