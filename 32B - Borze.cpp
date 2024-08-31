// 32B - Borze
// https://codeforces.com/problemset/problem/32/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str, result;
    cin >> str;

    int n = str.length();
    for(int i=0;i<n;i++){
        if(str[i] == '.') result += '0';
        if(str[i] == '-' && str[i+1] == '.'){
            result += '1';
            i++;
        }
        if(str[i] == '-' && str[i+1] == '-'){
            result += '2';
            i++;
        }
    }

    cout << result << endl;
    return 0;
}
