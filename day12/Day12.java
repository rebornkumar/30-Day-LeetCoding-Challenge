class Day12 {
    public int lastStoneWeight(int[] stones) {
        
        int n = stones.length;
        PriorityQueue<Integer>que = new PriorityQueue<Integer>();
        for(int i = 0 ;i < n; i++) {
            que.add(-stones[i]);
        }
        
        while(que.size() > 1) {
            
            int stone1 = que.poll();
            int stone2 = que.poll();
            int stone = Math.abs(stone1 - stone2);
            //System.out.println(stone1 + " "+stone2+" "+stone);
            if(stone > 0) {
                que.add(-stone);
            }
        }
        int ans = 0;
        if(que.size() > 0) {
            ans = que.poll();
        }
        return -ans;
    }
}