class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<bool> isRowZero(rows, false);
        vector<bool> isColZero(cols, false);

        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                if(matrix[row][col] == 0){
                    isRowZero[row] = true;
                    isColZero[col] = true;
                }
            }
        }
        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                if(isRowZero[row] || isColZero[col]){
                    matrix[row][col] = 0;
                }
            }
        }
    }
};
