// 894A - QAQ
// https://codeforces.com/problemset/problem/894/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    vector<int> prefixQ(n + 1, 0), suffixQ(n + 1, 0);
    
    for (int i = 0; i < n; ++i) prefixQ[i + 1] = prefixQ[i] + (s[i] == 'Q');    
    for (int i = n - 1; i >= 0; --i) suffixQ[i] = suffixQ[i + 1] + (s[i] == 'Q');
    
    int count_QAQ = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'A') {
            int countQBefore = prefixQ[i];
            int countQAfter = suffixQ[i + 1];
            count_QAQ += countQBefore * countQAfter;
        }
    }
    
    cout << count_QAQ << endl;
    return 0;
}
