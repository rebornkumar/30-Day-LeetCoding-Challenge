class Day5Optimised {
    public int maxProfit(int[] prices) {
        
        int n = prices.length;
        if( n < 2) return 0;
        
        int [] profit = new int [n];
        for(int i = 1;i < n;i++) {
            
            int diff = prices[i] - prices[i-1];
            
            if(diff > 0 ) {
                profit[i] = profit[i-1] + diff;
            }
            else {
                profit[i] = profit[i-1];
            }
        }
        return profit[n-1];
    }
}