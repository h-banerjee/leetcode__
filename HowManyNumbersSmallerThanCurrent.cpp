#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);  // Initialize the result array with 0

        // Compare each number with every other number
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[j] < nums[i]) {
                    result[i]++;
                }
            }
        }
        return result;
    }
};
