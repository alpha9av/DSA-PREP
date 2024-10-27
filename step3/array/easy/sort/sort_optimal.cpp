#include<bits/stdc++.h>
using namespace std;


bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }
  return true;
}


int main() {
    int m;
    cin>>m;
    int arr[m];
    for (int i; i<m; i++){
        cin>>arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    isSorted(arr,n);    
  // printf("%s", isSorted(arr, n) ? "True" : "False");
  cout<<(isSorted(arr, n) ? "True" : "False");
}
