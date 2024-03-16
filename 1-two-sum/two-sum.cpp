class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> value_to_index;
        for(int i=0;i<nums.size();i++)
        {
            int needed_value=target - nums[i];
            if(value_to_index.find(needed_value)!=value_to_index.end())
            {
                return {i,value_to_index[needed_value]};
            }
            value_to_index[nums[i]]=i;
        }
    return {};
    }
};