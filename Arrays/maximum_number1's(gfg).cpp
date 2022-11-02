class Solution{
public:
    
    int findZeroes(int nums[], int n, int k) {
         int i=0,j=0,countzeros=0,ans=INT_MIN;
        
        while(j<n)
        {
            if(nums[j]==0)
                countzeros++;
        
        while(countzeros>k)
        {
            if(nums[i]==0)
                countzeros--;
             i++;
        }
       
        ans=max(ans,j-i+1);
    j++;
        }
    return ans;
    }  
};
