// 734A - Anton and Danik
// https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int a = 0, d = 0;
    for(char ch : s){
        if(ch == 'A') a++;
        else if(ch == 'D') d++;
    }
 
    if(a > d) cout << "Anton" << endl;
    else if(a == d) cout << "Friendship" << endl;
    else cout << "Danik" << endl;
    return 0;
}
