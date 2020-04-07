class Day7 {
    public int countElements(int[] arr) {
        
        int n = arr.length;
        
        Map<Integer,Integer>map = new HashMap<Integer,Integer>();
        
        for(int i = 0; i < n;i++) {
            
            if(map.containsKey(arr[i]) == false) {
                map.put(arr[i],1);
            }
            else {
                map.put(arr[i],map.get(arr[i]) + 1);
            }
        }
        int ans = 0;
        for(Map.Entry<Integer,Integer> entry : map.entrySet()) {
            
            Integer key = entry.getKey();
            Integer count = entry.getValue();
            
            if(map.containsKey(key+1) == true) {
                ans += (int)count;
            }
        }
        return ans;
    }
}