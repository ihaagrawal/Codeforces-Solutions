// 707A - Brain's Photos
// https://codeforces.com/problemset/problem/707/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n, vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'C' || arr[i][j] == 'Y' || arr[i][j] == 'M'){
                cout << "#Color" << endl;
                return 0;
            }
        }
    }

    cout << "#Black&White" << endl;
    return 0;
}
