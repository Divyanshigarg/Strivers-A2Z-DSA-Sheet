class Solution{
  public:
    int majorityElement(int a[], int size)
    {
    unordered_map <int, int> m;
        for(int i=0;i<size;i++)
        {
            m[a[i]]++;
        }
        for(int i=0;i<size;i++)
        {
            if(m[a[i]]>size/2)
            {
                return a[i];
            }
        }
        return -1;
    //both methods are correct
    
        // int count = 0;
        // int candidate = 0;

        // for (int num : nums) {
        //     if (count == 0) {
        //         candidate = num;
        //     }
        //     if(num==candidate) count += 1; 
        //     else count -= 1; 
        // }

        // return candidate;
    }
};
