vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int low=0,high=n-1;
    
    while(low<=high)
    {
        if(arr[low] != x)
        low++;
        if(arr[high] != x)
        high--;
        if(arr[low] == x && arr[high] == x)
        {
            v.push_back(low);
            v.push_back(high);
            break;
        }
    }
    if(low>high)
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    return v;
}
