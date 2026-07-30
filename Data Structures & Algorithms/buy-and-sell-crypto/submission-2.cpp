class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = prices[0];        
        int res = 0; 
        for(int i = 0;i<prices.size();i++){
            minP = min(minP, prices[i]);

            res = max(res, (prices[i] - minP));
        }
        return res;
    }
};
