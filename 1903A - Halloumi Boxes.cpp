// 1903A - Halloumi Boxes
// https://codeforces.com/problemset/problem/1903/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool sorted(vector<int>& arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        if(k == 1 && !sorted(arr)) cout << "NO" << endl;
        else cout << "YES" << endl;    

    }

    return 0;
}
