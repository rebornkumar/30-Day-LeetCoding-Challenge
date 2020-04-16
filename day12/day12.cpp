class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int ans = 0;
        priority_queue<int>que;
        for(int i = 0;i < stones.size();i++) {
            que.push(stones[i]);
        }
        while(que.size() > 1) {
            
            int num1 = que.top();
            que.pop();
            int num2 = que.top();
            que.pop();
            int num = abs(num1 - num2);
            if(num != 0) {
                que.push(num);
            }
        }
        if(que.size() == 1) {
            ans =  que.top();
        }
        return ans;
    }
};