// 38A - Army
// https://codeforces.com/problemset/problem/38/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=1;i<n;i++) cin >> arr[i];

    int a, b;
    cin >> a >> b;

    int sum = 0;
    for(int i=a;i<b;i++) sum += arr[i];
    cout << sum << endl;
    return 0;
}
