// 266B - Queue at the School
// https://codeforces.com/problemset/problem/266/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    string initial;
    cin >> initial;

    for(int i=0;i<t;i++){
        int j = 1;
        while(j < n){
            if(initial[j-1] == 'B' && initial[j] == 'G'){
                swap(initial[j], initial[j-1]);
                j += 2;
            }else j++;
        }
    }

    cout << initial << endl;
    return 0;
}
