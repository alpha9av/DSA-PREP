#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n) {
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) {
       if(arr[i] < small) {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small) {
          second_small = arr[i];
       }
    }
   return second_small;    
}
int secondLargest(int arr[],int n) {
  if(n<2)
  return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return second_large;                
}


int main() {
    int m;
    cin>>m;
    int arr[m];
    for (int i; i<m; i++){
        cin>>arr[i];
    }
       
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}
