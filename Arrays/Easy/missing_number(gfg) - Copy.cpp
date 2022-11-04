int missingNumber(int arr[], int n)
{
    
    int total_sum=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
         sum+=arr[i];
    }
    return total_sum-sum;
}
