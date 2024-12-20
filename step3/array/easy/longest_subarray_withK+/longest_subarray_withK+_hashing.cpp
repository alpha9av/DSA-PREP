#include <bits/stdc++.h>
using namespace std;

int getlongestsubarray(vector<int>& a, long long k) {
    int n = a.size();

    map<long long, int> presumMap;
    long long sum = 0;
    int maxlen = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];

        if (sum == k) {
            maxlen = max(maxlen, i + 1);
        }

        long long rem = sum - k;

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
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getlongestsubarray(a, k);
    cout << "the length of the longest subarray is: " << len << "\n";
    return 0;
}
