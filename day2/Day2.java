class Day2 {
    Integer getNumber(Integer num) {
        int sum = 0;
        while(num > 0) {
            int digit = num%10;
            sum += digit*digit;
            num /= 10;
        }
        return sum;
    }
    public boolean isHappy(int n) {
        
        boolean happy = false;
        HashSet<Integer> map = new HashSet<Integer>();
        Integer num = n;
        while(map.contains(num) == false) {
            map.add(num);
            num = getNumber(num);
            if(num == 1) {
                happy = true;
                break;
            } 
        }
        return happy;
    }
}