// 764A - Taymyr is calling you
// https://codeforces.com/problemset/problem/764/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, m, z;
    cin >> n >> m >> z;

    int count = 0;
    for(int i=1;i<=z;i++){
        if(i % n == 0 && i % m == 0) count++;
    }

    cout << count << endl;
    return 0;
}
