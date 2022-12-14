class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int m=n/3;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it: mp)
        {
            if(it.second>m)
                ans.push_back(it.first);
        }
        if (ans.size()!=0)
         {
        sort(ans.begin(),ans.end());
         return ans;
         }
           return ans;
        
    
    }
};
