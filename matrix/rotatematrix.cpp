class Solution {
public:
    /*method 2 optimal solution
    1. transpose matrix
    2. reverse every row
    time O(n2)
    space O(1)*/
    void rotate(vector<vector<int>>& matrix) {
        int row_size = matrix.size();
        int col_size = matrix[0].size();

        //finding out the transpost
        for(int row = 0; row < row_size; row++){
            for(int col = 0; col < col_size; col++){
                if (row < col)
                swap(matrix[row][col],matrix[col][row]);
            }
        }

        //reversing each row
        for(int row = 0; row < row_size; row++){
            reverse(matrix[row].begin(), matrix[row].end());
        }
    }
};