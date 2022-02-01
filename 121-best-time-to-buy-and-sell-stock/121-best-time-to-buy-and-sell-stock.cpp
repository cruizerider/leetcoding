class Solution {
public:
    int maxProfit(vector<int>&v) {
        int n=v.size();
        int mn=v[0],maxd=INT_MIN;
        for(int i=1;i<n;i++)
        {
            maxd=max(maxd,v[i]-mn);
            mn=min(mn,v[i]);
        }
        if(maxd<0)
            return 0;
        return maxd;
    }
};