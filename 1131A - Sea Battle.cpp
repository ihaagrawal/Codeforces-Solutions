// 1131A - Sea Battle
// https://codeforces.com/problemset/problem/1131/A

#include <iostream>
using namespace std;

int main(){
    long long m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    long long cnt=0,ans=0;
    cin>>x>>y>>l>>r;

    k=y+r;
    z=max( x, l);
    ans= ( k+2)*2 + z*2;

    cout << ans << endl;
    return 0;
}
