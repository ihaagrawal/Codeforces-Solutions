// 476A - Dreamoon and Stairs
// https://codeforces.com/problemset/problem/476/A


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int lb = (n+1)/2;
    int result = (lb + m - 1)/m * m;

    if(result > n) result = -1;
    cout << result << endl;

    return 0;
}
