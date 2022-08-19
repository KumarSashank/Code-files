class Solution {
    public int numIdenticalPairs(int[] nums) {
        int len = nums.length;
        int count = 0;
        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
}

public class array_1512 {
    public static void main(String[] args) {
        Solution s = new Solution();
        int[] nums = { 1, 2, 3, 1, 1, 3 };
        System.out.println(s.numIdenticalPairs(nums));
    }
}