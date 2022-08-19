class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int len = image.length;
        int[][] res = new int[len][len];
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                res[i][j] = image[i][len - 1 - j] == 1 ? 0 : 1;
            }
        }
        return res;
    }
}

public class array_832 {
    public static void main(String[] args) {
        Solution s = new Solution();
        int[][] image = { { 1, 1, 0 }, { 1, 0, 1 }, { 0, 0, 0 } };
        s.flipAndInvertImage(image);
    }
}