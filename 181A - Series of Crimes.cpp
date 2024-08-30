// 181A - Series of Crimes
// https://codeforces.com/problemset/problem/181/A

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int x, y;
    x = y = 0;

    char ch[105];
    for(int i=0;i<n;i++){
        cin >> ch;
        for(int j=0;j<m;j++){
            if(ch[j] == '*'){
                x ^= i;
                y ^= j;
            }
        } 
    }

    cout << x+1 << " " << y+1 << endl;
    return 0;
}
