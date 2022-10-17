#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int ans[n];
	    for(int i=0;i<n;i++)
	   {
	       cin>>arr[i];
	   } 
	   for(int i=n-1;i>=0;i--)
	   {
	       ans[n-i-1]=arr[i];
	   }
	   for(int i=0;i<n;i++)
	   {
	       cout<<ans[i]<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}
