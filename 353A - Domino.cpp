// 353A - Domino
// https://codeforces.com/problemset/problem/353/A


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int upper = 0, lower = 0;
    int odd_count = 0;

    while(n--){
        int a, b;
        cin >> a >> b;

        upper += a;
        lower += b;

        if ((a % 2) != (b % 2)) odd_count++;
    }

    if ((upper % 2 == 0) && (lower % 2 == 0)) cout << 0 << endl;  
    else if ((upper % 2 == 1) && (lower % 2 == 1) && odd_count > 0) cout << 1 << endl;  
    else cout << -1 << endl; 

    return 0;
}
