// 832A - Sasha and Sticks
// https://codeforces.com/problemset/problem/832/A


#include <iostream>
#include <vector>
using namespace std;

int main (){
    unsigned long long n,k,res;
    while (cin >> n >> k){
        res = n/k;
        if (res & 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
