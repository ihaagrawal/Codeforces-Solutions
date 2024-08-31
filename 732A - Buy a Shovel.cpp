// 732A - Buy a Shovel
// https://codeforces.com/problemset/problem/732/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int k, r;
    cin >> k >> r;

    int val = 0;
    long long price = 0;
    bool flag = true;

    while(flag){
        if((price % 10 == 0 && price != 0) || price % 10 == r) break;
        val++;
        price += k;
    }

    cout << val << endl;
    return 0;
}
