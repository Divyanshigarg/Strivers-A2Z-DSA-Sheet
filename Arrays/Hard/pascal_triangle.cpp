class Solution{
public:
    long long int mod=1e9+7;
    vector<ll> nthRowOfPascalTriangle(int n) 
    {
        if(n==1)
        return {1};
        
        vector<ll> ans;
        vector<ll> v = nthRowOfPascalTriangle(n-1);
        
        ans.push_back(1);
        
        for(int i=1;i<n-1;i++)
        ans.push_back((v[i-1]+v[i])%mod);
        
        ans.push_back(1);


        return ans;
    }
};
