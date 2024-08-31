// 746A - Compote
// https://codeforces.com/problemset/problem/746/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int sum = 0;
    bool flag = true;
    while(flag){
        if(a * 2 <= b && ((a * 2) * 2) <= c){
            sum = a + a * 2 + (a * 2) * 2;
            flag = false;
        }else a--;
    }

    cout << sum << endl;
    return 0;
}
