// 219A - k-String
// https://codeforces.com/problemset/problem/219/A  


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int k;
    cin >> k;

    string str;
    cin >> str;

    map<char, int> mp;
    for(char ch : str) mp[ch]++;

    for(auto it : mp){
        if(it.second % k != 0){
            cout << -1 << endl;
            return 0;
        }
    }

    string result = "";
    for(auto it : mp){
        result += string(it.second / k, it.first);
    }

    string final_result = "";
    for(int i = 0; i < k; i++) {
        final_result += result;
    }

    cout << final_result << endl;
    return 0;
}
