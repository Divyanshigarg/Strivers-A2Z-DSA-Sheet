class Solution {
public:
    bool check(vector<int>& nums) {
       int n=nums.size();
        int count=0;
        //if we have more than 1 breakpoints than the array is not sorted
        for(int i=0;i<n-1;i++)
        {
        if(nums[i]>nums[i+1])
            count++;
        }
        //also check whether the last element of array is greater than the first or not
        if(nums[n-1]>nums[0])
            count++;
        //sorted array
        if(count<=1)
        return true;
        //unsorted array
        return false;
    }
};
