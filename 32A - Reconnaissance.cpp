// 32A - Reconnaissance
// https://codeforces.com/problemset/problem/32/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int num1 = 0, num2 = 1, ways = 0;
    while(num2 < n){
        if(arr[num2] - arr[num1] <= d){
            ways += (num2 - num1);
            num2++;
        }else num1++;
    }

    ways *= 2;
    cout << ways << endl;
    return 0;
}
