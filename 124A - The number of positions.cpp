// 124A - The number of positions
// https://codeforces.com/problemset/problem/124/A

#include <iostream>
using namespace std;


int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int cnt=0;
	for(int i =0; i<n; i++){
		if(n-(i+1) <= b && i+1 > a) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
