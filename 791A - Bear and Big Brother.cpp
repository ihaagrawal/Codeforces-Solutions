// 791A - Bear and Big Brother
// https://codeforces.com/problemset/problem/791/A

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    int count = 0;
    bool flag = true;
    while(flag){
        a *= 3; b *= 2;
        if(a > b) flag = false;
        count++;
    }

    cout << count << endl;
    return 0;
}
