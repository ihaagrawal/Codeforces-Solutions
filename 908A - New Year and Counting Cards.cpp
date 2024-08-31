// 908A - New Year and Counting Cards
// https://codeforces.com/problemset/problem/908/A

#include<algorithm>
#include<iostream>


using namespace std;

int main(){
    int i,j,k;
    int n,m;
    string s;

    cin >> s;

    int cnt=0;
    int l=s.length();
    for(i=0;i<l;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') cnt++;
        else if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9') cnt++;
    }

    cout << cnt << endl;
    return 0;
}
