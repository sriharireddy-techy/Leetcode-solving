class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> original = matrix; 
        for(int j=0;j<matrix[0].size();j++){
            for(int i=0;i<matrix.size();i++){
                matrix[i][j]=original[matrix.size()-(j+1)][i];
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                cout<<matrix[i][j];
            }
        }

    }
};