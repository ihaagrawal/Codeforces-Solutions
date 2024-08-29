// 339A - Helpful Maths
// https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;

    vector<int> arr;
    for(char ch : str){
        if(ch - '0' >= 0 && ch - '0' <= 9) arr.push_back(ch - '0');
    }

    sort(arr.begin(), arr.end());
    string result = "";

    for(int i=0;i<arr.size()-1;i++){
        result += arr[i] + '0';
        result += '+';
    }
    result += arr[arr.size()-1] + '0';

    cout << result << endl;
    return 0;
}
