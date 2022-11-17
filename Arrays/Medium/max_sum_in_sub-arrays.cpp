class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long n)
    {
        long long maxi=INT_MIN;
        long long sum=0;
        for(int i=1;i<n;i++)
        {
          sum=arr[i]+arr[i-1];
          maxi=max(maxi,sum);
        }
        return maxi;
    }
};
