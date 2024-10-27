#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
  int temp[n];
  temp[0] = arr[n - 1];
  for (int i = 1; i < n; i++) {
    temp[i] = arr[i - 1];
  }
  for (int i = 0; i < n; i++) {
    cout << temp[i] << " ";
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
