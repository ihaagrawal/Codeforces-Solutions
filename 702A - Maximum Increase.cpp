// 702A - Maximum Increase
// https://codeforces.com/problemset/problem/702/A


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];

    int max_len = 0, j = 0, i;
    for(i=1;i<n;i++){
        if(arr[i] <= arr[i-1]){
            max_len = max(max_len, i-j);
            j = i;
        }
    }

    max_len = max(max_len, i-j);
    cout << max_len << endl;
    return 0;
}
