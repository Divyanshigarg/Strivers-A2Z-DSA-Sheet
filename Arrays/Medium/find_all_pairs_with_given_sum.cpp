class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
    // vector<pair<int,int>>ans;
    //     for(long long int i=0;i<N; i++){
    //         for( long long int j=0; j<M; j++){
    //             if(A[i]+B[j]==X){
    //                 ans.push_back(make_pair(A[i],B[j]));
    //             }
    //         }
    //     }
    //   sort(ans.begin(), ans.end());
    //   return ans; 
    
    //both solutions are correct
    
    sort(A,A+N);
        vector<pair<int,int>>p;
        unordered_map<int,int>mp;
        for(int i=0;i<M;i++)
        {
            mp[B[i]];
        }
        for(int i=0;i<N;i++)
        {
            if(mp.find(X-A[i])!=mp.end())
            {
                p.push_back({A[i],X-A[i]});
            }
        }
        return p;
    }
};
