#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0;
  vector<int> Union;
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) {
      if (Union.size() == 0 || Union.back() != arr1[i]) Union.push_back(arr1[i]);
      i++;
    } else {
      if (Union.size() == 0 || Union.back() != arr2[j]) Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) {
    if (Union.back() != arr1[i]) Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) {
    if (Union.back() != arr2[j]) Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}

int main() {
  int n, m;
  cout << "Enter the number of elements in arr1: ";
  cin >> n;
  int arr1[n];
  cout << "Enter the elements of arr1: ";
  for (int i = 0; i < n; i++) cin >> arr1[i];
  cout << "Enter the number of elements in arr2: ";
  cin >> m;
  int arr2[m];
  cout << "Enter the elements of arr2: ";
  for (int i = 0; i < m; i++) cin >> arr2[i];
  vector<int> Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is" << endl;
  for (auto &val : Union) cout << val << " ";
  return 0;
}
