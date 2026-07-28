class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        // Agar k > n ho
        k = k % n;

        // Step 1: Reverse the whole array
        reverse(nums.begin(), nums.end());

        // Step 2: Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Reverse remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};