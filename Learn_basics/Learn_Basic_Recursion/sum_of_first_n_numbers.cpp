class Solution {
  public:
    long long sumOfSeries(long long N) {
        
        if(N<1){
            return 0;
        }
        return (N*(N+1)/2)*(N*(N+1)/2);
    }
};
