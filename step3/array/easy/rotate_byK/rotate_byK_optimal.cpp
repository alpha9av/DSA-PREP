// left rotate

#include <iostream>
using namespace std;
void Reverse(int arr[], int start, int end) {
  while (start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void Rotateeletoleft(int arr[], int n, int k) {
  Reverse(arr, 0, k - 1);
  Reverse(arr, k, n - 1);
  Reverse(arr, 0, n - 1);
}
int main() {
  int n, k;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++) cin >> arr[i];
  cout << "Enter the number of positions to rotate left: ";
  cin >> k;
  Rotateeletoleft(arr, n, k % n);
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;
  return 0;
}


// right rotate
#include <iostream>
using namespace std;
void Reverse(int arr[], int start, int end) {
  while (start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void Rotateeletoright(int arr[], int n, int k) {
  Reverse(arr, 0, n - k - 1);
  Reverse(arr, n - k, n - 1);
  Reverse(arr, 0, n - 1);
}
int main() {
  int n, k;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++) cin >> arr[i];
  cout << "Enter the number of positions to rotate right: ";
  cin >> k;
  Rotateeletoright(arr, n, k % n);
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;
  return 0;
}
