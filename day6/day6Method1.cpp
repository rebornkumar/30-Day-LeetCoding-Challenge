class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& A) {
        
        int n = A.size();
        unordered_map<string,vector<int>>hash;
        
        for(int i = 0 ;i < n;i++) {
            
            string key = A[i];
            sort(key.begin(),key.end());
            if(hash.find(key) == hash.end()) {
                hash[key] = {i};
            }
            else {
                hash[key].push_back(i);
            }
        }
        vector<vector<string>>ans;
        for(auto it = hash.begin();it != hash.end();it++) {
            vector<string>tmp;
            for(int i = 0; i < it->second.size();i++) {
                
                int index = it->second[i];
                tmp.push_back(A[index]);
            }
            ans.push_back(tmp);
        }
        
        return ans;
        
    }
};