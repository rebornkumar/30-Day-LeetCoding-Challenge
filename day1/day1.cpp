class Day1 {
public:
    int singleNumber(vector<int>&A) {
        
        int N = A.size();
        int ans = 0;
        for(int i=0;i<N;i++) {
            ans = ans ^ A[i];
        }
        return ans;
    }
};