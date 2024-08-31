// 443A - Anton and Letters
// https://codeforces.com/problemset/problem/443/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    string s;
    set <char> set;
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z') set.insert(s[i]);
    }
    cout << set.size() << endl;
    return 0;
}
