// 1433A - Boring Apartments
// https://codeforces.com/problemset/problem/1433/A


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;

        int rem = x % 10;
        int count = 10*(rem-1);
        
        int digits = 0;
        while(x > 0){
            x /= 10;
            digits++;
        }

        count += (digits * (digits + 1)/2);

        cout << count << endl;
    }

    return 0;
}
