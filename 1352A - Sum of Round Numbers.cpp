// 1352A - Sum of Round Numbers 
// https://codeforces.com/problemset/problem/1352/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> extractPlaceVal(int n, int& count){
    vector<int> places;
    int place = 1;

    while(n > 0){
        int digit = (n % 10) * place;
        if(digit != 0){
            places.push_back(digit);
            count++;
        }        
        n /= 10;
        place *= 10;
    }

    return places;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int count = 0;
        vector<int> places = extractPlaceVal(n, count);
        int size = places.size();
        cout << count << endl;
        for(int i=size-1;i>=0;i--) cout << places[i] << " ";
        cout << endl;
    
    }
    return 0;
}
