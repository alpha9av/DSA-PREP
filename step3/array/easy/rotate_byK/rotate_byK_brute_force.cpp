// right rotate by k elements
#include <iostream>
using namespace std;

void Rotatetoright(int arr[], int n, int k) {
  if (n == 0) return;
  k = k % n;
  if (k > n) return;
  int temp[k];
  for (int i = n - k; i < n; i++) {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--) {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++) {
    arr[i] = temp[i];
  }
}

int main() {
  int n, k;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++) cin >> arr[i];
  cout << "Enter the number of rotations: ";
  cin >> k;
  Rotatetoright(arr, n, k);
  cout << "After rotating the elements to the right:" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}


// left rotate by k elements
#include <iostream>
using namespace std;

void Rotatetoleft(int arr[], int n, int k) {
  if (n == 0) return;
  k = k % n;
  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }
  for (int i = k; i < n; i++) {
    arr[i - k] = arr[i];
  }
  for (int i = 0; i < k; i++) {
    arr[n - k + i] = temp[i];
  }
}

int main() {
  int n, k;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++) cin >> arr[i];
  cout << "Enter the number of rotations: ";
  cin >> k;
  Rotatetoleft(arr, n, k);
  cout << "After rotating the elements to the left:" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
