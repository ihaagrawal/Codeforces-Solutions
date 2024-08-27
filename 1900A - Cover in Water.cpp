// 1900A - Cover in Water 
// https://codeforces.com/problemset/problem/1900/A

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        int hash = 0, dot = 0;
        for(char ch : str){
            if(ch == '#') hash++;
            else dot++;
        }

        if(hash == n){
            cout << 0 << endl;
            continue;
        }

        string min_str = "...";
        if(str.find(min_str) != string::npos) cout << 2 << endl;
        else cout << dot << endl;
    }

    return 0;
}
