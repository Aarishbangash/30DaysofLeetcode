class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum= sum + nums[i];
        }
        int n=nums.size();
        int sum_no=(n*(n+1))/2;
        int missing_no=sum_no-sum;
        return missing_no;
        
    }
};