class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       long  n = nums.size();
        if(n<4) return {};
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(long i=0;i<n;i++){
            
            for(long j = i+1;j<n;j++){
                
                long long x = long(target) - long(nums[i])-long(nums[j]);
                long l = j+1,r=n-1;
                while(r>l){
                    
                    if(nums[l]+nums[r]>x) r--;
                    else if(nums[l]+nums[r]<x) l++;
                    else {
                        ans.push_back({nums[i],nums[j],nums[l++],nums[r--]});
                        while(l<r and nums[l]==nums[l-1]) l++;
                        while(l<r and nums[r]==nums[r+1]) r--;
                    }
                }
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
            while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        return ans;
    }
};
