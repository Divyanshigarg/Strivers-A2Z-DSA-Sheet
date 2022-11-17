class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr)
    {
      int k,l;
      for(k=n-2;k>=0;k--)
      {
          if(arr[k]<arr[k+1])
          break;
      }
      
      if(k<0)
      reverse(arr.begin(),arr.end());
      else{
          for(l=n-1;l>k;l--)
          {
              if(arr[l]>arr[k])
              break;
      
      }
      swap(arr[k],arr[l]);
      reverse(arr.begin()+k+1,arr.end());
      }
      return arr;
}
};
