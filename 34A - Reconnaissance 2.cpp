// 34A - Reconnaissance 2
// https://codeforces.com/problemset/problem/34/A


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

    int mn = INT_MAX, first;
    for(int i=0;i<n-1;i++){
        if(mn > abs(arr[i] - arr[i+1])){
            mn = abs(arr[i] - arr[i+1]);
            first = i;
        }
    }

    if(mn > abs(arr[0] - arr[n-1])) cout << n << " " << 1 << endl;
    else cout << first+1 << " " << first+2 << endl;
    return 0;
}
