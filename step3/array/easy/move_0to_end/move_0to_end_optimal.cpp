#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeros(int n, vector<int>& a) {
    int j = -1;

    // Find the first zero in the array
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    // If there are no zeros, return the array as is
    if (j == -1) return a;

    // Move non-zero elements to the left by swapping
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);

    // Print the result
    for (auto& it : ans) {
        cout << it << " ";
    }
    cout << '\n';

    return 0;
}
