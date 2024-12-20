#include <bits/stdc++.h>
using namespace std;

int getlongestsubarray(vector<int>& a, int k) {
    int n = a.size();

    map<int, int> presumMap;
    int sum = 0;
    int maxlen = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];

        if (sum == k) {
            maxlen = max(maxlen, i + 1);
        }

        int rem = sum - k;

        if (presumMap.find(rem) != presumMap.end()) {
            int len = i - presumMap[rem];
            maxlen = max(maxlen, len);
        }

        if (presumMap.find(sum) == presumMap.end()) {
            presumMap[sum] = i;
        }
    }

    return maxlen;
}

int main() {
    vector<int> a = { -1, 1, 1};
    int k = 1;
    int len = getlongestsubarray(a, k);
    cout << "the length of the longest subarray is: " << len << "\n";
    return 0;
}
