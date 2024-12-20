#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeros(int n, vector<int>& a) {
    // Temporary vector to store non-zero elements
    vector<int> temp;

    // Copy non-zero elements from the original array to the temporary array
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            temp.push_back(a[i]);
        }
    }

    // Number of non-zero elements
    int nz = temp.size();

    // Copy non-zero elements back to the original array
    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }

    // Fill the rest of the array with zeros
    for (int i = nz; i < n; i++) {
        a[i] = 0;
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
