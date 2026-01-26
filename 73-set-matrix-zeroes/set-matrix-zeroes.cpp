class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();//no vectors
        int cols=matrix[0].size();//size of the first vector
        bool firstrowzero=false;
        bool firstcolzero=false;
        for (int j = 0; j < cols; j++) {
            if (matrix[0][j] == 0) {
                firstrowzero = true;
                break;
            }
        }
        for(int j=0;j<rows;j++){
            if(matrix[j][0]==0){
                firstcolzero=true;
                break;
            }
        }
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][0] == 0 || matrix[0][j]==0) {
                    matrix[i][j]=0;
                }
            }
        }
        if(firstrowzero){
            for (int j = 0; j < cols; j++){
                matrix[0][j]=0;
            }
        }
        if(firstcolzero){
            for (int j = 0; j < rows; j++){
                matrix[j][0]=0;
            }
        }
        
        
        
        



        
    }
};