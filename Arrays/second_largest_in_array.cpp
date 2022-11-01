class Solution{
public:	
	
	int print2largest(int arr[], int n) {
	    
	    if(n<2)
	    return -1;
	    int l=INT_MIN,sl=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(l<arr[i])
	        {
	            sl=l;
	            l=arr[i];
	        }
	    
	   
	       else if(arr[i]>sl && arr[i] != l)
	        {
	            sl=arr[i];
	        }
	        
	        
	    }
	    if(sl==INT_MIN)
	        return -1;
	    return sl;
	}
};
