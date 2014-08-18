class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int num = 0;
        int n = prices.size();
        if(n == 0) return 0;
        for(int i=0;i<n-1;i++){
            if(prices[i+1] > prices[i]){
                num += prices[i+1] - prices[i];
            }
        }
        return num;
    }
};
