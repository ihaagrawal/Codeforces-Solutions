// 34B - Sale
// https://codeforces.com/problemset/problem/34/B


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    int result = 0;
    for(int i=0;i<m;i++){
        if(arr[i] <= 0) result += -1 * arr[i];
        else break;
    }

    cout << result << endl;
    return 0;
}
