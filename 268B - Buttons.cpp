// 268B - Buttons
// https://codeforces.com/problemset/problem/268/B  


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum = n;
    for(int i=1;i<n;i++) sum += (n-i)*i;
    cout << sum << endl;
    return 0;
}
