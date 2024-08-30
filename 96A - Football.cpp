// 96A - Football
// https://codeforces.com/problemset/problem/96/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	string s;
	cin >> s;

	int zero = 0;
	int one = 0;
	string result = "NO";
	for(int i =0; i<s.size(); i++){
		if(s[i] == '0'){
			one = 0;
			zero++;
		}
		if(s[i] == '1'){
			one++;
			zero = 0;
		}

		if(zero == 7 || one == 7) {
            result = "YES"; 
            break ;
        }

	}

	cout << result << endl;
	return 0;
}
