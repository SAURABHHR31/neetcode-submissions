class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, h = n - 1;

        while (l < h) {
            int sum = nums[l] + nums[h];

            if (sum < target) {
                l++;
            }
            else if (sum > target) {
                h--;
            }
            else {
                return {l+1, h+1};
            }
        }

        return {};
    }
};