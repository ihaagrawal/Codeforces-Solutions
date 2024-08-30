// 315A - Sereja and Bottles
// https://codeforces.com/problemset/problem/315/A


#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    int count = 0;
    for(int i=0;i<n;i++) cin >> a[i] >> b[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i] == b[j] && i != j){
                count++;
                break;
            }
        }
    }

    cout << n - count << endl;
    return 0;
}
