class Solution {
    int helper(string& str) {
        int index = 0;
        for(int i = 0;i < str.size();i++) {
            if(str[i] == '#') {
                index--;
                index = max(0,index);
            }
            else {
                str[index++] = str[i]; 
            }
        }
        return index;
    }
public:
    bool backspaceCompare(string S, string T) {
        int index1 = helper(S);
        int index2 = helper(T);
        while(index1 > 0 && index2 > 0) {
            if(S[index1 -1] == T[index2 -1]) {
                index1--;
                index2--;
            }
            else {
                return false;
            }
        }
        if(index1 == 0 && index2 == 0) {
            return true;
        }
        return false;
    }
};