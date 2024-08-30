// 233A - Perfect Permutation 
// https://codeforces.com/problemset/problem/233/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 2 != 0){
        cout << -1 << endl;
        return 0;
    }

    vector<int> arr(n);
    for(int i=0;i<n;i++) arr[i] = i+1;

    for(int i=1;i<n;i+=2) swap(arr[i], arr[i-1]);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    return 0;
}
