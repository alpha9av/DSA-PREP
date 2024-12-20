#include <iostream>
#include <vector>
using namespace std;

int getSingleElement(const vector<int>& arr) {
    int result = 0;

    // XOR all elements in the array
    for (int num : arr) {
        result ^= num;
    }

    return result;
}

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
