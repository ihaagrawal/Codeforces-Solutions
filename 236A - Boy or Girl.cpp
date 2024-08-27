// 236A - Boy or Girl
// https://codeforces.com/problemset/problem/236/A


#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main(){
    string str;
    cin >> str;

    set<char> st;
    for(char ch : str) st.insert(ch);

    if(st.size() % 2 != 0) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl; 

    return 0;
}
