class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int rem=0,rev=0;
		    int ans=n;
		    while(n>0)
		    {
		        rem=n%10;
		        rev=rev*10+rem;
		        n=n/10;
		    }
		    if(ans==rev)
		    {
		        cout<<"Yes";
		    }
		    else cout<<"No";
		}
};
