// 116A - Tram 
// https://codeforces.com/problemset/problem/116/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(2, 0));

    for(int i=0;i<n;i++){
        cin >> mat[i][0] >> mat[i][1];
    }

    int current = mat[0][1], diff = current;
    for(int i=1;i<n;i++){
        current -= mat[i][0];
        current += mat[i][1];
        diff = max(diff, current);
    }

    cout << diff << endl;
    return 0;
}
