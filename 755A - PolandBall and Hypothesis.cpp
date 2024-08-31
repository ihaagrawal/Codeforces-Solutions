// 755A - PolandBall and Hypothesis
// https://codeforces.com/problemset/problem/755/A


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool prime(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<1000;i++){
        if(!prime(n*i+1)){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
