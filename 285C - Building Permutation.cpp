// 285C - Building Permutation
// https://codeforces.com/problemset/problem/285/C

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    long long count = 0;
    for(int i=0;i<n;i++) count += abs(arr[i] - (i+1));

    cout << count << endl;
    return 0;
}
