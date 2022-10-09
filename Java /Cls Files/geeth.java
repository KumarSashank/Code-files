import java.util.Scanner;

public class geeth {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        String s1, s2;
        System.out.println("Enter two strings: ");
        s1 = scr.next();
        s2 = scr.next();
        int m = s1.length();
        int n = s2.length();
        int[][] dp = new int[m + 1][n + 1];
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0) {
                    dp[i][j] = j;
                } else if (j == 0) {
                    dp[i][j] = i;
                } else if (s1.charAt(i - 1) == s1.charAt(j - 1)) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = 1 + Math.min(dp[i - 1][j - 1], Math.min(dp[i - 1][j], dp[i][j - 1]));
                }
            }
        }
        System.out.println("Minimum edit distance: " + dp[m][n]);
        scr.close();
    }
}