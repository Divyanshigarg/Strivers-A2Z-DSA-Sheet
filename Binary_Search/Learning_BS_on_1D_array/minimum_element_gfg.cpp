class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        sort(arr, arr +n );
        return arr[0];
        //we can do it using binary search also
    }
};

