// 177A1 - Good Matrix Elements
// https://codeforces.com/problemset/problem/177/A1

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int sum = 0, half = n/2;

    for(int i=0; i<n; i++) sum += arr[i][half];
    for(int j=0; j<n; j++) sum += arr[half][j];
    for(int i = 0; i < n; i++){
        sum += arr[i][i]; 
        if(i != n-i-1) sum += arr[i][n-i-1]; 
    }
    sum -= 2 * arr[half][half];

    cout << sum << endl;
    return 0;
}
