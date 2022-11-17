class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0,count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
        if(nums[i]==0)
            count0++;
        
        if(nums[i]==1)
            count1++;
        }
        
        for(int i=0;i<count0;i++)
        {
            nums[i]=0;
        }
        int temp=count0+count1;
        for(int i=count0;i<temp;i++)
        {
            nums[i]=1;
        }
        for(int i=temp;i<nums.size();i++)
        {
            nums[i]=2;
        }
    }
};
