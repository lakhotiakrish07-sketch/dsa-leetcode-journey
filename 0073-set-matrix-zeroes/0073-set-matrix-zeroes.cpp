class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>a;
        vector<int>b;
        for(int i = 0 ; i<m;i++){
            for(int j = 0 ; j<n ; j++){
                if(matrix[i][j]==0){
                    a.push_back(i);
                    b.push_back(j);
                }
            }
        }

        for(int k = 0 ; k<a.size();k++){

                for(int j = b[k];j<n;j++){
                    matrix[a[k]][j]=0;
                }
            
            
                for(int j = b[k];j>=0;j--){
                    matrix[a[k]][j]=0;
                }
                for(int i = a[k];i<m;i++){
                    matrix[i][b[k]]=0;
                }
            
            
                for(int i = a[k];i>=0;i--){
                    matrix[i][b[k]]=0;
                }
            

        }
        
    }
};