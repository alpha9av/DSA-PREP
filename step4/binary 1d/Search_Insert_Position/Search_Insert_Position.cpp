#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& arr, int x) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, x;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the value to insert: ";
    cin >> x;

    int ind = searchInsert(arr, x);
    cout << "The index is: " << ind << "\n";
    return 0;
}

