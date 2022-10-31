class Solution{
    public:
    int searchInSorted(int arr[], int N, int K) 
    { 
       for(int i=0;i<N;i++)
       {
           if(K==arr[i])
          return 1;
       }
       return -1;
    }
};
