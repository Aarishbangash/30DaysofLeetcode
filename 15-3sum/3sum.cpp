class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     set<vector<int>> res;
        if (nums.size() == 0) return vector<vector<int>>(res.begin(), res.end());
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[j] + nums[k];
                if (sum == -nums[i]) {
                    res.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum > -nums[i]) {
                    k--;
                } else if (sum < -nums[i]) {
                    j++;
                }
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};