#include <bits/stdc++.h>
using namespace std;

int getlongestsubarray(vector<int>& a, int k) {
    int n = a.size();
    int len = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int s = 0;
            for (int K = i; K <= j; K++) {
                s += a[K];
            }
            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main() {
    vector<int> a = { -1, 1, 1};
    int k = 1;
    int len = getlongestsubarray(a, k);
    cout << "the length of the longest subarray is: " << len << endl;
    return 0;
}
