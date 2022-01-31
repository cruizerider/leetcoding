class Solution {
public:
    int maximumWealth(vector<vector<int>>&v) {
        int n=v.size(),m=v[0].size();
        int ans=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<m;j++)
            {
                sum+=v[i][j];
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};