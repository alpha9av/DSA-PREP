#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
  int temp = arr[0];
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int m;
  cin >> m;
  int arr[m];
  for (int i; i < m; i++) {
    cin >> arr[i];
  }
  solve(arr, m);
  return 0;
}
