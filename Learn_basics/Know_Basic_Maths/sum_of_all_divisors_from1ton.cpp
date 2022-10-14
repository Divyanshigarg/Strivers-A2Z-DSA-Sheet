class Solution
{
public:
    long long sumOfDivisors(int n)
    {
        long long divisor;
      long long sum=0;
      for(int i=1;i<=n;i++)
      {
          divisor=n/i;
          sum=sum+divisor*i;
      }
      return sum;
    }
};
