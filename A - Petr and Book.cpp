// A - Petr and Book
// https://codeforces.com/contest/139/problem/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(7);
    for(int i=0;i<7;i++) cin >> arr[i];

    int i = 0;
    while(n > 0){
        n -= arr[i];
        i++;
        
        if(n <= 0){
            cout << i << endl;
            return 0;
        }

        if(i == 7) i = 0;
    }

    cout << i << endl;
    return 0;
}
