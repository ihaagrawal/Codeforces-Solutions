// 118A - String Task
// https://codeforces.com/problemset/problem/118/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    string result = "";

    string vowel = "aeiyouAEIOYU";
    for(char ch : str){
        if(vowel.find(ch) == string::npos){
            ch = tolower(ch);
            result += '.';
            result += ch;
        }
    }

    cout << result << endl;
    return 0;
}
