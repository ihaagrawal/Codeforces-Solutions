// 1391B - Fix You
// https://codeforces.com/problemset/problem/1391/B

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char dir;
                cin >> dir;
                if(j == m-1 && dir == 'R') count++;
                else if(i == n-1 && dir == 'D') count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
