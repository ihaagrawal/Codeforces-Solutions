// 231A - Team
// https://codeforces.com/problemset/problem/231/A


#include <iostream>
using namespace std;

int main(){
    int n;
    int result = 0;
    cin>>n;

    for(int i=0; i<n; i++){
        int a,b,c;
        int num = 0;
        cin >> a >> b >> c;

        if(a == 1) num++;
        if(b == 1) num++;
        if(c == 1 ) num++;

        if(num >= 2) result++;
        
    }

    cout << result << endl;
    return 0;
}
