class Day5BruteForce {
    public int maxProfit(int[] prices) {
        
        int n = prices.length;
        if( n < 2) return 0;
        
        int [] profit = new int [n];
        for(int i = 1;i < n;i++) {
            for(int j = 0;j < i;j++) {
                int diff = prices[i] - prices[j];
                if(diff >= 0) {
                    //sell here
                    profit[i] = Math.max(profit[i], profit[j] + diff);
                }
                else {
                    //dont sell here
                    profit[i] = Math.max(profit[i],profit[j]);
                }
            }
        }
        return profit[n-1];
    }
}