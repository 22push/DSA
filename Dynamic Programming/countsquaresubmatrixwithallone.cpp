class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int ans=0;
        int n= matrix.size();
        int m= matrix[0].size();
        for(int i=0;i<n;i++){
            if(matrix[i][0]==1){
                ans++;
            }
        }
        for(int i=1;i<m;i++){
            if(matrix[0][i]==1){
                ans++;
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]>=1){
                    matrix[i][j]=min(matrix[i-1][j-1],min(matrix[i][j-1],matrix[i-1][j]))+1;
                    // cout<<matrix[i][j]<<endl;
                    ans+=(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};