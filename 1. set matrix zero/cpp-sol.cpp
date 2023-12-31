class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int placeholder = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int row0 = matrix[0][0];
        int col0 = matrix[0][0];
        for(int i=0;i<n;i++){
            if(matrix[i][0] == 0)
                row0 = 0;
        }
        for(int i=0;i<m;i++){
            if(matrix[0][i] == 0)
                col0 = 0;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0)
                    matrix[0][j] = matrix[i][0] = placeholder;
            }
        }
        for(int i=n-1;i>0;i--){
            for(int j=m-1;j>0;j--){
                if(matrix[i][0]==placeholder || matrix[0][j]==placeholder)
                    matrix[i][j] = 0;
            }
        }
        for(int j=0;j<m;j++)
            if(col0==0 || matrix[0][j]==placeholder)
                matrix[0][j] = 0;
        for(int i=0;i<n;i++)
            if(row0==0 || matrix[i][0]==placeholder)
                matrix[i][0] = 0;
        return;
    }
};