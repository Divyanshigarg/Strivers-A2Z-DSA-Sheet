class Solution
{
    public:
    vector<long long> printFibb(int n) 
    {
      vector<long long> ans;
          long long n1=0;
        long long n2=1;
        long long nextno;
       ans.push_back(1);
        for(int i=1; i<n; i++){
          nextno=n1+n2;
            n1=n2;
            n2=nextno;
             ans.push_back(nextno);
        }
        return ans;
    }
}; 
