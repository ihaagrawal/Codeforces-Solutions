// 136A - Presents
//   https://codeforces.com/problemset/problem/136/A


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<int> arr(n+1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> p;
        arr[p] = i;
    }
    cout << arr[1];
    for (int i = 2; i <= n; ++i)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    return 0;
}
