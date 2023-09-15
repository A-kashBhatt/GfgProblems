class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int ans=-1;
        vector<int>dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(auto it:coins){
                if(i-it>=0 && dp[i-it]!=INT_MAX){
                    dp[i]=min(dp[i],1+dp[i-it]);
                }
            }
        }
        return dp[amount]==INT_MAX?-1:dp[amount];
    }
};