class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
         int i=l;
         int j=mid+1;
         int f=l;
         int temp[1000000];
         
         while(i<=mid && j<=r)
         {
             if(arr[i]<arr[j])
             {
                 temp[f]=arr[i];
                 i++;
             }
             else {
             temp[f]=arr[j];
             j++;
             }
         f++;
    }
         if(i>mid)
         {
             while(j<=r)
             {
                 temp[f]=arr[j];
                 f++;
                 j++;
             }
         }
         else
         {
             while(i<=mid)
             {
                 temp[f]=arr[i];
                 f++;
                 i++;
             }
         }
         for(int f=l;f<=r;f++)
         {
             arr[f]=temp[f];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r)
        {
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        }
    }
};
