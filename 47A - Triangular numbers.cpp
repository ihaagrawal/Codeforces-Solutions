// 47A - Triangular numbers
// https://codeforces.com/problemset/problem/47/A


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        int sum = i * (i+1)/2;
        if(sum == n){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
