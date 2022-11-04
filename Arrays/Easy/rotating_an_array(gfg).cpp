class Solution{   
public:
    void leftRotate(int arr[], int n, int k) 
    {
       if (n == 0)
    return;
       k = k % n;
      if (k > n)
    return;
  int temp[k];
  
  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n - k; i++)
  {
    arr[i] = arr[i + k];
  }
  for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[i - n + k];
  }
    }
};
