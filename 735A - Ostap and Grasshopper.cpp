// 735A - Ostap and Grasshopper
// https://codeforces.com/problemset/problem/735/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    string line;
    cin >> line;

    int start = 0, end = 0;
    for(int i=0;i<n;i++){
        if(line[i] == 'G') start = i;
        if(line[i] == 'T') end = i;
    }

    int dist = abs(start - end);
    if(dist % k != 0){
        cout << "NO" << endl;
        return 0;
    }

    if(start > end) swap(start, end);
    int i = start;
    while(i <= end){
        if(line[i] == '#'){
            cout << "NO" << endl;
            return 0;
        }
        i += k;
    } 

    cout << "YES" << endl;
    return 0;
}
