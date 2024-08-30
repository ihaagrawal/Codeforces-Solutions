// 200B - Drinks 
// https://codeforces.com/problemset/problem/200/B


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double sum = 0.0;
    cin >> n;

    for(int i=0;i<n;i++){
        double x;
        cin >> x;
        sum += x;
    }

    cout << fixed << setprecision(12)<<(sum/n) << endl;
    return 0;
}
