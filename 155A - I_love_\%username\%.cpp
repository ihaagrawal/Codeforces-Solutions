// 155A - I_love_\%username\%
// https://codeforces.com/problemset/problem/155/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int worst = arr[0], best = arr[0];
    int count = 0;
    for(int i=1;i<n;i++){
        if(arr[i] > best) count++;
        if(arr[i] < worst) count++;
        
        worst = min(worst, arr[i]);
        best = max(best, arr[i]);
    }

    cout << count << endl;
    return 0;
}
