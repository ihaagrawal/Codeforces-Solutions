// 703A - Mishka and Game
// https://codeforces.com/problemset/problem/703/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m,c;
    int mishika = 0, chris = 0, tie = 0;
    for(int i=0; i<n; i++){
        cin >> m >> c;

        if(m > c) mishika++;
        else if(m < c) chris++;
        else if(m == c) tie++;
    }
    if(tie == n || mishika == chris) cout<<"Friendship is magic!^^";
    else if(mishika > chris) cout<<"Mishka";
    else cout << "Chris";

    cout << endl;
    return 0;
}
