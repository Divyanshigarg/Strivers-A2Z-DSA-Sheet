class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int len = nums.size(), counter = 0;
        
        for (int i = 0; i < len; i++)
        {
		// search for non zero element
            if (nums[i]) {
			// Assign all non zero integers to first counter terms
                nums[counter] = nums[i];
                counter++;
            }
        }
		// iterate from counter to the end and make all rest of the integers zero
        for (int i = counter; i < len; i++) {
            nums[i] = 0;
        }
    }
};
