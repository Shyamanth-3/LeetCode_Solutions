class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n,m;
        m=matrix.size();
        n=matrix[0].size();
        int ans=0;
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){ 
                if(matrix[i][j]==1)
                    matrix[i][j]+=matrix[i-1][j];
            }
        }
        for(int i=0;i<m;i++){
            sort(matrix[i].rbegin(),matrix[i].rend());
            for(int j=0;j<n;j++) ans=max(ans,matrix[i][j]*(j+1));
        }
        return ans;
    }
};