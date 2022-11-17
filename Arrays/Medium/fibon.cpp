//program of fibonacci series
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the numbers till you want to print the fibonacci series";
	cin>>n;
	int a=0,b=1;
	int c;
	cout<<a<<" ";
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
	
}
