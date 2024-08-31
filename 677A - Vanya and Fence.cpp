// 677A - Vanya and Fence
// https://codeforces.com/problemset/problem/677/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, h, result = 0;
    cin >> n >> h;

    vector<int> arr(n+10);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] > h) result += 2;
        else result += 1;
    } 

    cout << result << endl;
    return 0;
}
