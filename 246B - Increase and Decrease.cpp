// 246B - Increase and Decrease
// https://codeforces.com/problemset/problem/246/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int sum = 0;
    for(int i=0;i<n;i++) sum += arr[i];

    if(sum % n == 0) cout << n << endl;
    else cout << n-1 << endl;
    return 0;
}
