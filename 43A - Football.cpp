// 43A - Football
// https://codeforces.com/problemset/problem/43/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, int> mp;
    while(n--){
        string s;
        cin >> s;
        mp[s]++;
    }

    int mx = INT_MIN;
    string result;
    for(auto it : mp){
        if(mx < it.second){
            mx = it.second;
            result = it.first;
        }
    }

    cout << result << endl;
    return 0;
}
