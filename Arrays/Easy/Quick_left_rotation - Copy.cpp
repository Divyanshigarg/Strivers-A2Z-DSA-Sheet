class Solution
{
	public:
	//TC=O(n) , SC=O(1)
void rev(int a[],int l, int h){
	    while(l<h){
	        swap(a[l],a[h]);
	        l++;h--;
	    }
	}
	void leftRotate(int arr[], int k, int n) 
	{ 
	   k%=n;
	   rev(arr,0,k-1);
	   rev(arr,k,n-1);
	   rev(arr,0,n-1);
	   
	   //brute froce approach  
	   //all codes are correct 
	  // TC=O(n) , SC=O(k)
// 	   if (n == 0)
//     return;
//   k = k % n;
//   if (k > n)
//     return;
//   int temp[k];
//   for (int i = 0; i < k; i++)
//   {
//     temp[i] = arr[i];
//   }
//   for (int i = 0; i < n - k; i++)
//   {
//     arr[i] = arr[i + k];
//   }
//   for (int i = n - k; i < n; i++)
//   {
//     arr[i] = temp[i - n + k];
//   }
 //third solution
// 	if (n == 0)
//     return;
//   k = k % n;
//   if (k > n)
//     return;
//   int temp[k];
//   for (int i = 0; i < k; i++)
//   {
//     temp[i] = arr[i];
//   }
//   for (int i = 0; i < n - k; i++)
//   {
//     arr[i] = arr[i + k];
//   }
//   for (int i = n - k; i < n; i++)
//   {
//     arr[i] = temp[i - n + k];
//   }
	}
};
