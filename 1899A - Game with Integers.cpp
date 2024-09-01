// 1899A - Game with Integers
// https://codeforces.com/problemset/problem/1899/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        if(n % 3) cout << "First" << endl;
        else cout << "Second" << endl;
    }

    return 0;
}
