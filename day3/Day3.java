class Day3 {
    public int maxSubArray(int[] nums) {
        int n = nums.length;
        int ans = -2147483647;
        for(int i = 0; i < n;i++) {
            ans = Math.max(ans,nums[i]);
        }
        if(ans <= 0) {
            return ans;
        }
        int sum = 0;
        for(int i = 0;i < n;i++) {
            
            if(sum+nums[i] >= 0) {
                sum += nums[i];
            }
            else {
                sum = 0;
            }
            ans = Math.max(ans,sum);
        }
        return ans;
    }
}