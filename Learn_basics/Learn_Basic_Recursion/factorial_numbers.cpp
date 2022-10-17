class Solution
{
public:
    long long fact(long long n){
        if(n==1 || n==0){
            return 1;
        }
        return n*fact(n-1);
    }
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> v;
        for(long long i=1;i<=N;i++)
        {
            if(fact(i)>N)
            {
                break;
            }
            v.push_back(fact(i));
        }
        return v;
    }
};
