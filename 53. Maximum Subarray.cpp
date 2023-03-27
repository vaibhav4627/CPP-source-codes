class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s = nums[0];
        int r = nums[0];
        for (int i=1;i<nums.size();i++)
        {
            int a=s+nums[i];
            s=max(nums[i],a);
            if(s>r)
            r=s;
        }
        return r;
    }
};
