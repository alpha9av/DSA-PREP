#include <bits/stdc++.h>
using namespace std;


bool isSorted(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i])
                return false;
        }
    }
    return true;
}


int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;


    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    bool ans = isSorted(arr, n);
    if (ans)
        cout << "True" << endl;
    else
        cout << "False" << endl;


    return 0;
}
