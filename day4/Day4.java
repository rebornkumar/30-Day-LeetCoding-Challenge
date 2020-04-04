class Day4{
    public void moveZeroes(int[] nums) {
        
        int n = nums.length;
        int relativeChange = 0;
        
        for(int i = 0;i < n;i++) {
            if(nums[i] == 0) {
                relativeChange++;
            }
            else {
                nums[i-relativeChange] = nums[i];
            }
        }

        while(relativeChange > 0) {
            nums[n-relativeChange--] = 0;
        }
    }
}