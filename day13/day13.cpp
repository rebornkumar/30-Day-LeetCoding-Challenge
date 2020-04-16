class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>vec(n+1,0);
        for(int i = 0;i < n;i++) {
            vec[i+1] = vec[i] + ( nums[i] == 1 ? 1 : -1);
        }
        
        unordered_map<int,int>hash;
        int ans = 0;
        for(int i=0;i<=n;i++) {
            if(hash.find(vec[i]) == hash.end()) {
                hash[vec[i]] = i;
            }
            else {
                int index = hash[vec[i]];
                ans = max(ans,i-index);
            }
        }
        return ans;
    }
};