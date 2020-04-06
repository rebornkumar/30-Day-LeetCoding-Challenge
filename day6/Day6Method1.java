class Day6Method1 {
    String getStringKey(int[] word) {
        
        String str = "";
        for(int i = 0; i < 26;i++) {
            if(word[i] != 0) {
                str = str + Character.toString((char)('a' + i) ) + Integer.toString(word[i]);
            }
        }
        return str;
    }
    public List<List<String>> groupAnagrams(String[] strs) {
        
        int n = strs.length;
        int [][] matrix = new int[n][26];
        
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < strs[i].length();j++) {
                
                int index = (int)(strs[i].charAt(j)-'a');
                matrix[i][index] += 1;
            }
        }
        
        Map<String,List<Integer>> hash = new HashMap<String,List<Integer>>();
        
        for(int i = 0; i < n;i++) {
            String key = getStringKey(matrix[i]);
            
            if(hash.containsKey(key) == false) {
                hash.put(key,new ArrayList<Integer>());
            }
            List<Integer> tmpList = hash.get(key);
            tmpList.add(i);
            hash.put(key,tmpList);
        }
        
        List<List<String>> ans = new ArrayList<List<String>>();
        for(Map.Entry <String,List<Integer>> entry : hash.entrySet()) {
            
            List<String> tmpList = new ArrayList<String>();
            for(int i = 0; i < entry.getValue().size();i++) {
                
                int index = entry.getValue().get(i);
                tmpList.add(strs[index]);
            }
            ans.add(tmpList);
        }
        return ans;
    }
}