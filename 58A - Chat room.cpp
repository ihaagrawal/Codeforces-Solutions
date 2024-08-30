// 58A - Chat room
// https://codeforces.com/problemset/problem/58/A


#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int count = 0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='h' && count==0) count++;
		else if(str[i] =='e' && count==1) count++;
		else if(str[i] == 'l' && count == 2) count++;
		else if(str[i] =='l' && count==3) count++;
		else if(str[i] == 'o' && count==4) count++;
    }

    if(count == 5) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
