#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
  int temp = arr[n - 1];
  for (int i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int m;
  cin >> m;
  int arr[m];
  for (int i = 0; i < m; i++) {
    cin >> arr[i];
  }
  solve(arr, m);
  return 0;
}
