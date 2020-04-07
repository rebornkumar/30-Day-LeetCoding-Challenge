class day7 {
public:
    int countElements(vector<int>& arr) {
        
        int n = arr.size();
        unordered_map<int,int>hash;
        
        for(int i = 0 ; i < n;i++) {
            if(hash.find(arr[i]) == hash.end()) {
                hash[arr[i]] = 1;
            }
            else {
                hash[arr[i]]++;
            }
        }
        int ans = 0;
        for(auto it = hash.begin();it != hash.end();it++) {
            
            int key = it->first;
            int count = it->second;
            if(hash.find(key+1) != hash.end()) {
                ans += count;
            }
        }
        return ans;
    }
};