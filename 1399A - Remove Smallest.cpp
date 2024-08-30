// 1399A - Remove Smallest
// https://codeforces.com/problemset/problem/1399/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr.begin(), arr.end());

        bool flag = false;
        for(int i=1;i<n;i++){
            if(abs(arr[i] - arr[i-1]) > 1){
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }

        if(flag) continue;
        cout << "YES" << endl;
    }
    return 0;
}
