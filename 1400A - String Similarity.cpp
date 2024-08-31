// 1400A - String Similarity
// https://codeforces.com/problemset/problem/1400/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--){
        string s;
        cin >> n >> s;
        for(int i=0; i<2*n-1; i+=2) cout <<s [i];
        cout << endl;
    }
    return 0;
}
