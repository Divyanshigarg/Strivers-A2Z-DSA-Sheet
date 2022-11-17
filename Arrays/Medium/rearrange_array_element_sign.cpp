class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> pos,neg;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }
        int i=0,j=0,k=0;
        while(i<n)
        {
            if(j<pos.size())
                nums[i++]=pos[j++];
            if(k<neg.size())
                nums[i++]=neg[k++];
        }
        return nums;
    }
};
