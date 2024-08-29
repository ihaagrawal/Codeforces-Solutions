// 1430C - Numbers on Whiteboard
// https://codeforces.com/problemset/problem/1430/C

#include <iostream>
#include <vector>
#include <cmath> // For std::ceil
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) arr[i] = i + 1;

        vector<pair<int, int>> vec;

        for(int i = n-1; i > 0; i--){
            int avg = (arr[i] + arr[i-1] + 1) / 2; // This effectively handles rounding up

            vec.push_back({arr[i-1], arr[i]});  

            arr.erase(arr.begin() + i);
            arr.erase(arr.begin() + i - 1);
            arr.insert(arr.begin() + i - 1, avg);
        }

        cout << arr[0] << endl;
        for(auto it : vec){
            cout << it.first << " " << it.second << endl;
        }
        cout << endl;
    }
    return 0;
}
