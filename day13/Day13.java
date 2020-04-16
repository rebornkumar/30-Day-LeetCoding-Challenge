class Day13 {
    public int findMaxLength(int[] nums) {
        
        int n = nums.length;
        int[] arr = new int[n+1];
        
        for(int i = 0;i<n;i++) {
            arr[i+1] = arr[i] + (nums[i] == 0 ? -1:1);
        }
        Map<Integer,Integer> myMap = new HashMap<Integer,Integer>();
        int ans = 0;
        for(int i = 0;i <= n;i++) {
            
            if(myMap.containsKey(arr[i] ) == true) {
                int index = myMap.get(arr[i]);
                ans = Math.max(ans,i-index);
            }
            else {
                myMap.put(arr[i],i);
            }
        }
        return ans;
    }
}