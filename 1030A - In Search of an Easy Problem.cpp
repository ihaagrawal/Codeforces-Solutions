// 1030A - In Search of an Easy Problem
// https://codeforces.com/problemset/problem/1030/A

#include <iostream>
#include <vector>;
#include <algorithm>;

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        if(num == 1){
            cout << "HARD" << endl;
            return 0;
        }
    }
    
    cout << "EASY" << endl;
    return 0;
}
