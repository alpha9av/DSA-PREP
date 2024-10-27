#include <bits/stdc++.h>
using namespace std;


int sortArr(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}


int main() {
    int n1;
    cin >> n1;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }


    cout << sortArr(arr1) << endl;
    return 0;
}
