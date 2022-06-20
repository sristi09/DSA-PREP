//greedy approach
int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minP=INT_MAX;
        int profit =0;
        for(int i=0;i<n;i++) {
            if(prices[i]<minP){
                minP=prices[i];
            }
            else if(prices[i]-minP>profit){
                profit = prices[i]-minP;
            }
        }
        return profit;
    }
