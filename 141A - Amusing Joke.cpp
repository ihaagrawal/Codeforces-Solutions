// 141A - Amusing Joke
// https://codeforces.com/problemset/problem/141/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    map<char, int> mp1;
    map<char, int> mp2;

    int n1 = str1.length(), n2 = str2.length(), n3 = str3.length();
    bool flag = true;

    if((n1 + n2) == n3){
        for(char ch : str1) mp1[ch]++;
        for(char ch : str2) mp1[ch]++;
        for(char ch : str3) mp2[ch]++;
        for(char ch : str3){
            if(mp1[ch] != mp2[ch]){
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }else cout << "NO" << endl;

    
    return 0;
}
