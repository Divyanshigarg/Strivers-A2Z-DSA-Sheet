class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int ans;
        // for(int i=1;i<=nums.size();i++)
        //     {
        //         if(nums[i] != nums[i-1] && nums[i] != nums[i+1])
        //             ans = nums[i];
        //     }
        // return ans;
        int a = 0;
       for(int i=0; i<nums.size(); i++){
           a^=nums[i];
       }
       return a;
    }
};
