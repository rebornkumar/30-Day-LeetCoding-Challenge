class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        
        int n = s.size();
        string str = s+s+s;
        int start = n;
        int finalShift = 0;
        for(int i = 0; i < shift.size();i++) {
            
            finalShift = finalShift + (shift[i][0] == 0 ? -shift[i][1] : shift[i][1]);
        }
        finalShift %= n;
        if(finalShift < 0) {
            start += abs(finalShift);
        }
        else if(finalShift > 0) {
            start -= finalShift;
        }
        string ans = str.substr(start,n);
        return ans;
    }
};