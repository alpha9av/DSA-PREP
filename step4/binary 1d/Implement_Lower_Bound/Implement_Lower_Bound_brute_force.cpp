#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            return i;
        }
    }
    return n;
}

int main() {
    int n, x;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the value for lower bound: ";
    cin >> x;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind <<endl;
    return 0;
}
