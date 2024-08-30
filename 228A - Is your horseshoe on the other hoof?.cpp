// 228A - Is your horseshoe on the other hoof?
// https://codeforces.com/problemset/problem/228/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    vector<int> arr(4);
    for(int i=0;i<4;i++) cin >> arr[i];

    map<int, int> mp;
    for(int i=0;i<4;i++) mp[arr[i]]++;

    int result = 0;
    for(auto it : mp){
        if(it.second > 1) result += it.second - 1;
    }

    cout << result << endl;
    return 0;
}
