class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int pos=1;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
                
                nums[pos++]=nums[i+1];
        }
         return pos;
    }
   
};

