// 133A - HQ9+
// https://codeforces.com/problemset/problem/133/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    bool flag = false;

    for(char ch : str){
        if(ch == 'H' || ch == 'Q' || ch == '9'){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
