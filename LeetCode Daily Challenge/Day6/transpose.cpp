class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int m=matrix.size();
        int n=matrix[0].size();  // old matrix m*n 
        
        vector<vector<int>> matrix2(n,vector<int>(m,0));    //new matrix n*m
        
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                matrix2[j][i]=matrix[i][j];
            }
        }
        return matrix2;
    }
    
};
