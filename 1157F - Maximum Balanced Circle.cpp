// 1157F - Maximum Balanced Circle
// https://codeforces.com/problemset/problem/1157/F


#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> arr(n); 
    unordered_map<int, int> freq; 

    // Reading input and calculating frequencies
    int m = 0; 
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; 
        freq[arr[i]]++; 
        m = max(m, arr[i]); 
    }

    // Find the longest balanced circle
    vector<int> result; 

    // Iterate over each possible starting point
    for(int i = 1; i <= m; ++i) {
        if (freq[i] == 0) continue; // Skip if the frequency of the current element is zero
        
        int j = i, sum = 0;
        
        // Expand to the right
        while(j <= m && freq[j] > 1) {
            sum += freq[j]; // Sum up the frequencies
            j++;
        }
        
        // Determine the boundaries of the balanced circle
        int l = i, r = j - 1;
        if (freq[r + 1] > 0) {
            sum++;
            r++;
        }

        if (freq[l - 1] > 0) {
            sum++;
            l--;
        }

        // Update the result if the current circle is longer
        if (sum > result.size()) {
            result.clear(); // Clear previous result
            for(int k = l; k <= r; k++) result.push_back(k); // Add elements from l to r
            for(int k = r; k >= l; k--) {
                for(int count = 0; count < freq[k] - 1; count++) result.push_back(k); // Add additional occurrences
            }
        }

        i = max(i, r); // Skip to the end of the current circle
    }

    // Output the result
    cout << result.size() << endl;
    for(int i = 0; i < result.size(); i++) cout << result[i] << " "; 
    cout << endl;
    return 0;
}
