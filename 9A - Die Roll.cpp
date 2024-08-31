// 9A - Die Roll
// https://codeforces.com/problemset/problem/9/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int y, w;
    cin >> y >> w;

    string probs[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int num = max(y, w);
    cout << probs[num] << endl;
    return 0;
}
