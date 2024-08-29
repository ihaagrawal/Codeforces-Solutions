// 1303A - Erasing Zeroes 
// https://codeforces.com/problemset/problem/1303/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;

        int n = str.length();
        int left = -1, right = n;

        for(int i=0;i<n;i++){
            if(str[i] == '1'){
                left = i;
                break;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(str[i] == '1'){
                right = i;
                break;
            }
        }

        if(left == -1 && right == n){
            cout << 0 << endl;
            continue;
        }

        int count = 0;
        for(int i=left;i<=right;i++){
            if(str[i] == '0') count++;
        }

        cout << count << endl;
    }
    return 0;
}
