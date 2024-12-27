class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;  // Duplicate found
            }
            seen.insert(num);  // Add the current number to the set
        }
        return false;  // No duplicates found
    }
};



class Solution {
public:
    // Function to sort the array using Bubble Sort
    void bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    // Swap nums[j] and nums[j + 1]
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
    }

    // Function to check for duplicates
    bool containsDuplicate(vector<int>& nums) {
        // Sort the array
        bubbleSort(nums);

        // Check for consecutive duplicates
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true; // Duplicate found
            }
        }
        return false; // No duplicates
    }
};
s