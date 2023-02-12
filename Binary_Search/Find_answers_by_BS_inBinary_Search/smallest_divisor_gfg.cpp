int smallestDivisor(vector<int>& nums, int K) {

        // Write your code here.
         int low=1,mid,res=INT_MAX;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int sum=0;
            mid=(low+high)/2;
            for(int i=0;i<nums.size();i++)
                sum+=ceil(nums[i]*1.0/mid);
            if(sum<=K)
            {
                res=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return res;
    }
