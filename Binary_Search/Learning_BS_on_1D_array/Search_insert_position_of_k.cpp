class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        int low=0,high=N-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(Arr[mid] == k)
            return mid;
            else if (Arr[mid] < k)
            low=mid+1;
            else
            high=mid-1;
        }
        return low;
    }
     
};
