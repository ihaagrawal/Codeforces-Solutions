// 431A - Black Square
// https://codeforces.com/problemset/problem/431/A

#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;


int main(){
    long  int a,b,c,d,i,j,result;
    char s[100001];
    while(cin >> a >> b >> c >> d){
        cin >> s;
        result=0;
        for(i=0;i<strlen(s);i++) {
            if(s[i]=='1') result+=a;
            else if(s[i]=='2') result+=b;
            else if(s[i]=='3') result+=c;
            else if(s[i]=='4') result+=d;
        }
        cout << result << endl;
    }
    return 0;

}
