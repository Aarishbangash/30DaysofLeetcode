class Solution {
public:

    int maxProduct(vector<int>& nums) {
        int maxproduct=INT_MIN;
        int currentproduct=1;
        for(int i=0;i<nums.size();i++)
        {
            currentproduct= currentproduct*nums[i];
            if(currentproduct>maxproduct)
            {
                maxproduct=currentproduct;
            }
            if (currentproduct==0)
            {
                currentproduct=1;
            }
        }
        currentproduct=1;
        for (int i=nums.size()-1;i>=0;i--)
        {
            currentproduct=currentproduct*nums[i];
                if (currentproduct>maxproduct)
                {
                    maxproduct=currentproduct;
                }
            if(currentproduct==0)
            {
                currentproduct=1;
            }
        }
        return maxproduct;
    }
};