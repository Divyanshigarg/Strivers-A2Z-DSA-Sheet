class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        int low = 0;
        int high = n-1;
        while(low<high)
        {
            int mid1 = (low+high)/2;
            int mid2 = mid1+1;
            if(arr[mid1]<arr[mid2])
                low=mid2;
            else
                high=mid1;
        }
        return low;
    }
};
