class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_far=INT_MIN;
        int max=0;
        
        for(int i=0;i<n;i++)
        {
            max=max+nums[i];
            if(max_far<max)
            {
                max_far=max;
            }
            if(max<0)
            {
                max=0;
            }
        }
        return max_far;
    }
};
