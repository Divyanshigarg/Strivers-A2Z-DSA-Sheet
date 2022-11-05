class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
             k = k%nums.size();
            // reverse the whole array
            reverse(nums.begin(),nums.end());
            // reverse the first k elements to get them in correct order
            reverse(nums.begin(), nums.begin()+k);
            // reverse the rest of elements to restore the correct order
            reverse(nums.begin()+k,nums.end());
    }
};
