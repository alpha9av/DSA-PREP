#include <iostream>
#include <vector>
using namespace std;

int getSingleElement(vector<int>& arr) {
    int n = arr.size();  // Size of the array

    // XOR all the elements to find the unique element
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr ^= arr[i];  // XOR each element
    }
    return xorr;  // The single element is the result of XOR
}

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};  // Example input array
    int ans = getSingleElement(arr);    // Get the single element
    cout << "The single element is: " << ans << endl;  // Output the result
    return 0;
}
