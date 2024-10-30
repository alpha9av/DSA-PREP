#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            return i;
        }
    }
    return n;
}

int main() {
    int n, x;
    cin >> n;
    cin >> x;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int ind = upperBound(arr, x, n);
    cout << ind << endl;
    return 0;
}
