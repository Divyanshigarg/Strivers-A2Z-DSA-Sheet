class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //both the codes are correct
        //tc=O(log(m*n)) sc=O(1)
//          int low=0;
//         if(!mat.size()) 
//             return false;
//         int N=mat[0].size();
//         int M=mat.size();
//         int high=(m * n)-1;
        
//         while(low<=high)
//         {
//             int mid=low+(high-low)/2;
            
//             if( mat[mid/n][mid%n] == target)
//                 return true;
//             else if ( mat[mid/n] [mid%n] > target)
//                 high=mid-1;
//             else 
//                 low=mid+1;
//         }
//         return false;
        
        //tc=O(log(m+n))  sc=O(1)
        int rows = matrix.size(),
			cols = matrix[0].size(),
            r = 0, c = cols - 1;
			
        while (r < rows && c > -1) {
            int cur = matrix[r][c];
            if (cur == target) return true;
            if (target > cur) r++;
            else c--;
        }
        
        return false;
    }
};
