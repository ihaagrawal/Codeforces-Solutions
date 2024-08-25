// 977A - Wrong Subtraction 
// https://codeforces.com/problemset/problem/977/A


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    while(k--){
        if(n % 10 != 0) n--;
        else n /= 10;
    }

    cout << n << endl;
    return 0;
}
