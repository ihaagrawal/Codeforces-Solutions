// 69A - Young Physicist
// https://codeforces.com/problemset/problem/69/A

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> vec(n, vector<int>(3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> vec[i][j];
        }
    }

    int x = 0, y = 0, z = 0;
    for(int i=0;i<n;i++){
        x += vec[i][0];
        y += vec[i][1];
        z += vec[i][2];
    }

    if(x == y && y == z && x == z && x == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
