// 785A - Anton and Polyhedrons
// https://codeforces.com/problemset/problem/785/A


#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string, int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;

    int n;
    cin >> n;
    int faces = 0;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        if(mp.find(str) != mp.end()){
            faces += mp[str];
        }
    }

    cout << faces << endl;
    return 0;
}
