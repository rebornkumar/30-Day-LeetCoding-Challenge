class Solution {
public:
    void moveZeroes(vector<int>&A) {
    int N = A.size();
    int change = 0;
    
    for(int i = 0;i < N;i++) {
        if(A[i] == 0) {
            change++;
        }
        else {
            A[i - change] = A[i];
        }
    }
    while(change > 0) {
        A[N-change--] = 0;
    }
  }
};