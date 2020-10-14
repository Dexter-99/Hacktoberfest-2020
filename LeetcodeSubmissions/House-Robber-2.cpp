class Solution {
public:
    int rob(vector<int>& nums) {
        
        if (nums.size() == 1)
            return nums[0];
        else if (nums.size() == 2)
            return max(nums[0], nums[1]);
        else if (nums.size() == 3)
            return max(nums[0], max(nums[1], nums[2]));
        
        vector<int> dp1(nums.size()-1, 0), dp2(nums.size()-1, 0);
        dp1[0] = nums[0];
        dp1[1] = dp2[0] = nums[1];
        dp2[1] = nums[2];
        dp1[2] = nums[0]+nums[2];
        dp2[2] = nums[1]+nums[3];
        
        for (int i = 3; i<nums.size()-1; ++i) {
            dp1[i] = nums[i]+max(dp1[i-2], dp1[i-3]);
            dp2[i] = nums[i+1]+max(dp2[i-2], dp2[i-3]);
        }
        
        return max(max(dp1[nums.size()-2], dp1[nums.size()-3]), max(dp2[nums.size()-2],dp2[nums.size()-3]));
        
    }
};
