// 731A - Night at the Museum
// https://codeforces.com/problemset/problem/731/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    char first = 'a';
    long long sum = 0;
    int n = s.size();

    for(int i=0;i<n;i++){
        long long num1 = abs(s[i] - first);
        long long num2 = 26 - num1;

        sum += min(num1, num2);
        first = s[i];
    }

    cout << sum << endl;
    return 0;
}
