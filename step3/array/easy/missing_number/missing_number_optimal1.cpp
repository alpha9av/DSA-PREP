#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    // Calculate the sum of the first N natural numbers
    int totalSum = (N * (N + 1)) / 2;

    // Calculate the sum of elements in the array
    int arraySum = accumulate(a.begin(), a.end(), 0);

    // The missing number is the difference
    return totalSum - arraySum;
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5}; // Input array with one missing number

    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
