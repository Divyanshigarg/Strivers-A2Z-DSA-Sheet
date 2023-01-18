pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
  sort(arr,arr+n);
  int low=0,high=n-1;
  int floor=-1,ceil=-1;
  while(low<=high)
  {
      int mid=(low+high)/2;
      if(arr[mid]==x)
      {
          floor=arr[mid];
          ceil=arr[mid];
          break;
      }
      else if (arr[mid] < x)
      {
          floor=arr[mid];
          low=mid+1;
      }
      else{
          ceil=arr[mid];
          high=mid-1;
      }
  }
  return {floor,ceil};
}
