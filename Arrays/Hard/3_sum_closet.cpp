class Solution{
    public:
    int closest3Sum(int a[], int n, int r)
    {
       sort(a,a+n);
        int mx=INT_MAX;
        int sum, re;
        for(int i=0;i<n;i++){
            int s=i+1;int e=n-1;
            while(s<e){
                sum=a[s]+a[e]+a[i];
                if(mx>abs(sum-r)){
                       mx=min(abs(sum-r),mx);
                       re=(sum-r);
                }
                if((sum-r)>0){
                    e--;   
                }
                else{
                 s++;   
                }   
            }
        }
        return re+r;
        
        
    }
};
