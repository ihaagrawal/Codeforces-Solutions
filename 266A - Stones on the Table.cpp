// 266A - Stones on the Table
// https://codeforces.com/problemset/problem/266/A


#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int result = 0;
    char last = s[0];
    for(int i=1;i<n;i++){
        if(last == s[i]) result++;
        last = s[i];
    }

    cout << result << endl;
    return 0;
}
