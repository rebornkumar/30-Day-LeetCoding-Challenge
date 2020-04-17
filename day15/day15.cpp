class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>suffixFactor(n,1);
        
        for(int i = n-2;i >= 0;i--) {
           suffixFactor[i] = suffixFactor[i+1]*nums[i+1];
        }
        
        int factor = 1;
        for(int i = 0; i < n;i++) {
            
            int tmp = nums[i];
            nums[i] = factor * suffixFactor[i];
            factor = factor * tmp;
        }
        return nums;
        
    }
};