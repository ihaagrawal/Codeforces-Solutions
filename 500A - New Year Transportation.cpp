// 500A - New Year Transportation
// https://codeforces.com/problemset/problem/500/A

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];

    int pos = 1, next;
    while(pos < t){
        next = pos + arr[pos-1];
        pos = next;
    }

    if(pos == t) cout << "YES" << endl;
    else cout << "NO" << endl;
}
