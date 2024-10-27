#include<bits/stdc++.h>
using namespace std;
void solve(int arr[], int n) {
  int temp[n];
  for (int i = 1; i < n; i++) {
    temp[i - 1] = arr[i];
  }
  temp[n - 1] = arr[0];
  for (int i = 0; i < n; i++) {
    cout << temp[i] << " ";
  }
  cout << endl;
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
