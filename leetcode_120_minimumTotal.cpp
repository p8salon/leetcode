class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        
        vector<vector<int>> dp(m, vector<int>(m));
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<=i; j++)
            {
                if(i==0)
                    dp[0][0] = triangle[0][0];
                else if(j==i)
                    dp[i][j] = dp[i-1][j-1] + triangle[i][j];
                else if(j==0)
                    dp[i][j] = dp[i-1][j] + triangle[i][j];
                else
                    dp[i][j] = min(dp[i-1][j], dp[i-1][j-1]) + triangle[i][j];
            }
        }
        return *min_element(dp[m - 1].begin(), dp[m - 1].end());
    }
};
