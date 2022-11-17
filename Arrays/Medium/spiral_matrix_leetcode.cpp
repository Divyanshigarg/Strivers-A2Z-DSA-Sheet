class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int> ans;
        int count = 0;
        int rows = matrix.size();
        int colms = matrix[0].size();
        int total = rows*colms;

        // index Initialisation
        int stRow = 0;
        int stColm = 0;
        int enRow = rows - 1;
        int enColm = colms - 1;

        // to make row, iterate column
        // to make column, iterate row
        // e.g. arr[first][second]  
        // "first" is always row  && "second" is always column in 2d array.

        while(count < total){
            // starting row
            for(int index = stColm; count < total && index <= enColm; index++){
                ans.push_back(matrix[stRow][index]);
                count++;
            }
            stRow++;

            // ending column
            for(int index = stRow; count < total && index <= enRow; index++){
                ans.push_back(matrix[index][enColm]);
                count++;
            }
            enColm--;

            // ending row
            for(int index = enColm; count < total && index >= stColm; index--){
                ans.push_back(matrix[enRow][index]);
                count++;
            }
            enRow--;

            // starting column
            for(int index = enRow; count < total && index >= stRow; index--){
                ans.push_back(matrix[index][stColm]);
                count++;
            }
            stColm++;
        }
        return ans;
    }
};
