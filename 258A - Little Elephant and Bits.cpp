// 258A - Little Elephant and Bits
// https://codeforces.com/problemset/problem/258/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;

    int ch = str.find('0');
    if(ch == -1) cout << str.substr(1) << endl;
    else cout << str.substr(0, ch) << str.substr(ch + 1) << endl;
    return 0;
}
