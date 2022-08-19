import java.util.*;

public class arrray_1920 {
    System.out.println(Arrays.toString(solution(new int[]{1,2,3,4,5,6,7,8,9,10})));
}

class Solution {
    public int[] buildArray(int[] nums) {
        // create array to store the result
        int[] result = new int[] {};

        // create a for loop to iterate through the array
        for (int i = 0; i < nums.length; i++) {
            // create a new array to store the result
            result[i] = nums[nums[i]];
        }
        return result;
    }
}