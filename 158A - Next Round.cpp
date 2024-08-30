// 158A - Next Round
// https://codeforces.com/problemset/problem/158/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];

    int count = 0, thresh = arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i] >= thresh && arr[i] > 0) count++;
    }

    cout << count << endl;
    return 0;
}
