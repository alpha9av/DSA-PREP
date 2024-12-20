#include <iostream>
#include <vector>
#include <algorithm> // For the max function

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;   // To count consecutive 1's
        int maxi = 0;  // To keep track of the maximum count of consecutive 1's
        
        // Traverse through the array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;  // Increment count if the current element is 1
            } else {
                cnt = 0;  // Reset count if the current element is 0
            }
            
            maxi = max(maxi, cnt);  // Update the maximum count if necessary
        }
        
        return maxi;  // Return the maximum consecutive 1's found
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};  // Sample input array
    Solution obj;                          // Create an object of the Solution class
    int ans = obj.findMaxConsecutiveOnes(nums);  // Call the function to find the result
    cout << "The maximum consecutive 1's are: " << ans << endl;  // Output the result
    return 0;
}
