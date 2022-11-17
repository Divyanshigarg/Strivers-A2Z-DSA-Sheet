class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
    int sum=0,row=matrix.size(),col=matrix[0].size();
        vector<vector<int>> v(matrix);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(v[i][j]==0){
                    int val=0;
                    if((i-1)>=0){
                        val+=v[i-1][j];
                        matrix[i-1][j]=0;
                    }
                    if((j-1)>=0){
                        val+=v[i][j-1];
                        matrix[i][j-1]=0;
                    }
                    if((i+1)<row){
                        val+=v[i+1][j];
                        matrix[i+1][j]=0;
                    }
                    if((j+1)<col){
                        val+=v[i][j+1];
                        matrix[i][j+1]=0;
                    }
                    matrix[i][j]=val;
                }
            }
        }
        
    }
};
