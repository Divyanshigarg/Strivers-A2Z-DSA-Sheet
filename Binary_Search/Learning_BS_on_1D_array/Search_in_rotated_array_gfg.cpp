int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(A[mid] == key)
            {
                return mid;
            }
            if(A[mid]>=A[l])
            {
                if(A[l]<=key && A[mid]>key)
                {
                    h = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            else{
                if(A[h]>=key && A[mid]<key)
                {
                    l = mid+1;
                }
                else{
                    h = mid-1;
                }
            }
        }
        return -1;
    }
