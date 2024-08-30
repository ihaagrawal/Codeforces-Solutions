// 71A - Way Too Long Words
// https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string str;
        cin >> str;
        string result = "";

        if(str.length() > 10){
            result += str[0];
            result += to_string(str.length() - 2);
            result += str[str.length()-1];
            cout << result << endl;
        }else cout << str << endl;
    }

    return 0;
}
