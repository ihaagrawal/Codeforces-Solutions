// 688A - Opponents
// https://codeforces.com/problemset/status?my=on

#include<iostream>
using namespace std;
int main(){
    int n,d;
    cin >> n >> d;

    int count = 0, maxCount = 0;
    for (int i = 0; i < d; ++i) {
        string str;
        cin >> str;

        if (str.find("0")!=string::npos) count++;
        else count = 0;

        maxCount = max(maxCount, count);
    }
    cout<<maxCount;
}
