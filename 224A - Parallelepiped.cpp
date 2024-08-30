// 224A - Parallelepiped
// https://codeforces.com/problemset/problem/224/A

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	unsigned int l1, l2, l3;
	cin >> l1 >> l2 >> l3;
	cout << 4*((sqrt((l1*l2)/ l3)) + (sqrt((l2*l3)/l1)) + (sqrt((l1*l3)/l2)));	
	return 0;

}
