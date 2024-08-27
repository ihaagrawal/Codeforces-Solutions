// 281A - Word Capitalization
// https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(){
    string str;
    cin >> str;

    char ch = toupper(str[0]);
    str[0] = ch;
    cout << str << endl;
    return 0;
}
