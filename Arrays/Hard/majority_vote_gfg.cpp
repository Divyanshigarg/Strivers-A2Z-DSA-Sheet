vector<int> Solve(int size, vector<int>& nums) {
       
      unordered_map<int,int>mp;
      vector<int> ans;
      int m  = size/3;
      for(int i=0;i<nums.size();i++)
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
         else
         {
             ans.push_back(-1);
             return ans;
        }
