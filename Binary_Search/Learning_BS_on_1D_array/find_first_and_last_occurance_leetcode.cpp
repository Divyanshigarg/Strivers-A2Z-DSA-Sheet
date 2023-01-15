class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> v;
//         int low=0,high=nums.size()-1;
        
//         while(low<=high)
//         {
//             if(nums[low] != x)
//                 low++;
//             if(nums[high] != x)
//                 high--;
//             if(nums[low] == x && nums[high] == x)
//             {
//                 v.push_back(low);
//                 v.push_back(high);
//                 break;
//             }
//         }
//         if(low>high || nums.empty())
//         {
//             v.push_back(-1);
//             v.push_back(-1);
//         }
//         return v;
        vector<int>v, res;
        for(int i=0; i<nums.size(); i++){
            if(target==nums[i]) v.push_back(i);
        }   
        
        if(v.size()>0){
            res.push_back(v[0]);
            res.push_back(v[v.size()-1]);
        }else{
            res.push_back(-1);
            res.push_back(-1);
        }
        return res;
    }
};
