// 716A - Crazy Computer
// https://codeforces.com/problemset/problem/716/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, c;
    cin >> n >> c;

    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];

    int count = 1;
    for(int i=1;i<n;i++){
        if(arr[i] - arr[i-1] <= c) count++;
        else count = 1;
    }

    cout << count << endl;
    return 0;
}
