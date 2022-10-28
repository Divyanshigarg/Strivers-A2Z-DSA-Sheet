class Solution{
public:
	void pushZerosToEnd(int arr[], int n) 
	{
	   int temp[n];
        int k=0;
        for (int i=0;i<n;i++){
            if (arr[i]!=0){
                temp[k]=arr[i];
                k++;
            }
        }
       
        while (k<n){
            temp[k]=0;
            k++;
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=temp[i];
        }
	}
};
