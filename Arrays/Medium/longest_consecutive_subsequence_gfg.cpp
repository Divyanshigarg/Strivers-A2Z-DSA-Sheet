class Solution{
    //Function to find the leaders in the array.
    public:
    //tc=O(n) and sc=O(1)
    vector<int> leaders(int arr[], int n)
    {
        vector<int> v;
        int max=arr[n-1];
        v.push_back(arr[n-1]);

        for(int i=n-2;i>=0;i--)
        {
            if( arr[i]>=max){
                max=arr[i];
                v.push_back(arr[i]);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
