// 1095A - Repeating Cipher
// https://codeforces.com/problemset/problem/1095/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    string str;
    cin >> str;

    string result = "";
    int i=0, index = 1;
    while(i < n){
        result += str[i];
        i += index;
        index++;
    }

    cout << result << endl;
    return 0;
}
