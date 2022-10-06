class Solution {
  public:
    string armstrongNumber(int n){
        int original=n;
        int rem=0,rev=0;
        while(n!=0)
        {
            rem=n%10;
            rev=rev+rem*rem*rem;
            n=n/10;
        }
        if(original==rev)
        cout<<"Yes";
        else
        cout<<"No";
    }
};
