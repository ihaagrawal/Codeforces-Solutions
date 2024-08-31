// 750A - New Year and Hurry
// https://codeforces.com/problemset/problem/750/A


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int min = 4 * 60;
    int req = min - k;
    if(req < 0){
        cout << 0 << endl;
        return 0;
    }

    int pdt = 1, count = 0;
    for(int i=1;i<=n;i++){
        pdt = 5*i;
        if(pdt > req){
            cout << count << endl;
            return 0;
        }

        count++;
        req -= pdt;
        if(req == 0) break;
    }

    cout << count << endl;
    return 0;
    
}
