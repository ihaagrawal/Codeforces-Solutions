// 49A - Sleuth
// https://codeforces.com/problemset/problem/49/A


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str); 

    int n = str.size();
    char ch = '\0'; 
    for(int i = n - 1; i >= 0; i--) {
        if(isalpha(str[i])) { 
            ch = str[i];
            break;
        }
    }

    if(ch == '\0') cout << "NO" << endl;
    else {
        string vowels = "aeiyouAEIYOU";
        if(vowels.find(ch) != string::npos) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
