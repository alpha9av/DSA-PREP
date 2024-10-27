#include<iostream>
using namespace std;

int search(int arr[], int n, int num) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == num)
            return i;
    }
    return -1;
}

int main() {
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the number to search: ";
    cin >> num;
    
    int val = search(arr, n, num);
    cout << val;

    return 0;
}
