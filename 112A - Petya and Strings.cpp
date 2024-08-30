// 112A - Petya and Strings
// https://codeforces.com/problemset/problem/112/A


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int result = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if(int(s1[i]) > int(s2[i])){
            result = 1;
            break;
        }else if(int(s1[i]) < int(s2[i])){
            result = -1;
            break;
        }
    }

    cout<<result<<endl;
    
    return 0;
}
