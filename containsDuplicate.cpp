
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2;  // Sum of numbers from 0 to n
        int actualSum = 0;
        
        // Sum the elements in the nums array
        for (int num : nums) {
            actualSum += num;
        }

        // The missing number is the difference between expected and actual sum
        return expectedSum - actualSum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 0, 1};  // Example input
    cout << "Missing Number: " << solution.missingNumber(nums) << endl;
    return 0;
}
